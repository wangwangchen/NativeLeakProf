#!/usr/bin/python
# coding=UTF-8

import sys
import subprocess
import os

def printReportTail(reportHtmlFile):
    reportHtmlFile.write("""
</body>
</html>
""")

def printReportHead(reportHtmlFile):
    reportHtmlFile.write("""<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
""")

def printTitle(reportHtmlFile, title):
    reportHtmlFile.write("<h2>" + title + "</h2>\n")

def printText(reportHtmlFile, text):
    reportHtmlFile.write("<h4>" + text + "</h4>\n")

def printSVG(reportHtmlFile, svgPath):
    reportHtmlFile.write('<embed src="')
    reportHtmlFile.write(svgPath)
    reportHtmlFile.write('" type="image/svg+xml" />')

def ParseStack(currentPath, ndkPath, stackFile, architecture, symbolsDir):
    print "currentPath: " + currentPath
    # 查找addr2line文件
    if architecture == "arm64-v8a":
        print "architecture is " + architecture
        addr2line = ndkPath + "/toolchains/aarch64-linux-android-4.9/prebuilt/darwin-x86_64/bin/aarch64-linux-android-addr2line"
        print "addr2line path: " + addr2line
        if not os.path.exists(addr2line):
            print "can not find arm64-v8a addr2line"
        else:
            print "find arm64-v8a addr2line"

    reportHtmlPath = os.path.split(stackFile)[0] + "/leakReport.html"
    if os.path.exists(reportHtmlPath):
        os.unlink(reportHtmlPath)
    reportHtmlFile = open(reportHtmlPath, "a")
    printReportHead(reportHtmlFile)

    # 处理stack文件
    for line in open(stackFile): 

        if line.startswith("libName:"):
            libName = line.replace("libName:", "").replace('\n', '').replace('\r', '')

            printTitle(reportHtmlFile, libName)
            
            libAbsolutePath = os.path.split(stackFile)[0] + "/" + libName
            if not os.path.exists(libAbsolutePath):
                os.makedirs(libAbsolutePath)
            flStackFilePath = libAbsolutePath + "/fl_stack.txt"
            flameGraphFile = open(flStackFilePath, "w")
            print "find lib: " + libName
        elif line.startswith("leakSize:"):
            leakSize = line.replace("leakSize:", "").replace('\n', '').replace('\r', '')

            leakMsg = "leak size: " + leakSize + "\n"

            printText(reportHtmlFile, leakMsg)

            print leakMsg
        elif line.startswith("stack:"):
            stack = line.replace("stack:", "").replace('\n', '').replace('\r', '')
            # print "stack: "
            for stackElement in stack.split("^"):
                if stackElement == "":
                    continue
                
                dlinfo = stackElement.split("|")
                pc = dlinfo[0]
                libPath = dlinfo[1]
                symbol = dlinfo[2]
                # print "pc " + pc + " " + libPath + " " + symbol
                symbolFile = symbolsDir + "/" + os.path.split(libPath)[1]
                if os.path.exists(symbolFile):
                    # print "---------"
                    parseCommend = addr2line + " -Ce " + symbolFile + " -f " + pc
                    # print parseCommend
                    # os.system(parseCommend)
                    result = os.popen(parseCommend)  
                    res = result.read()  
                    retraces = res.splitlines()
                    if len(retraces) != 2 or "?" in retraces[0] or "?" in retraces[1]:
                        if symbol != "":
                            method = symbol
                            codeLine = -1
                        else:
                            method = pc
                            codeLine = -1
                    else:
                        method = retraces[0]
                        codeLine = retraces[1]
                        # print method
                        # print codeLine
                elif symbol != "":
                    method = symbol
                    codeLine = -1
                else:
                    method = pc
                    codeLine = -1
                
                flameGraphFile.write(method + ";")
            flameGraphFile.write(" 1\n")
        elif line.replace('\n', '').replace('\r', '') == "libSplit!!!":
            # 结束了一个lib的输出
            print "finish lib " + libName + " parse"
            plExePath = os.path.split(currentPath)[0] + "/flamegraph.pl"
            svgPath = libAbsolutePath + "/" + libName + ".svg"
            commend = plExePath + " " + flStackFilePath + " > " + svgPath
            os.system(commend)

            printSVG(reportHtmlFile, svgPath.replace(os.path.split(libAbsolutePath)[0], "./"))

    printReportTail(reportHtmlFile)

def main(args):
    if 4 > len(args):
        print("请输入\"android ndk路径\" \"stack文件路径\" \"arm架构（armeabi/armeabi-v7a/arm64-v8a）\" \"带符号表so所在目录\"")
        return
    ParseStack(args[0], args[1], args[2], args[3], args[4])


if __name__ == "__main__":
    main(sys.argv)
