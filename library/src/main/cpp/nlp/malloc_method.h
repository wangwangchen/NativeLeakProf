//
// Created by chenwangwang on 2020/12/10.
//

#ifndef NATIVELEAKPROF_MALLOC_METHOD_H
#define NATIVELEAKPROF_MALLOC_METHOD_H

#include <cstddef>
#include <map>
#include<stack>
#include <string>

void *myMalloc1(size_t byteCount);
void *myMalloc2(size_t byteCount);
void *myMalloc3(size_t byteCount);
void *myMalloc4(size_t byteCount);
void *myMalloc5(size_t byteCount);
void *myMalloc6(size_t byteCount);
void *myMalloc7(size_t byteCount);
void *myMalloc8(size_t byteCount);
void *myMalloc9(size_t byteCount);
void *myMalloc10(size_t byteCount);

void *myMalloc11(size_t byteCount);
void *myMalloc12(size_t byteCount);
void *myMalloc13(size_t byteCount);
void *myMalloc14(size_t byteCount);
void *myMalloc15(size_t byteCount);
void *myMalloc16(size_t byteCount);
void *myMalloc17(size_t byteCount);
void *myMalloc18(size_t byteCount);
void *myMalloc19(size_t byteCount);
void *myMalloc20(size_t byteCount);

void *myMalloc21(size_t byteCount);
void *myMalloc22(size_t byteCount);
void *myMalloc23(size_t byteCount);
void *myMalloc24(size_t byteCount);
void *myMalloc25(size_t byteCount);
void *myMalloc26(size_t byteCount);
void *myMalloc27(size_t byteCount);
void *myMalloc28(size_t byteCount);
void *myMalloc29(size_t byteCount);
void *myMalloc30(size_t byteCount);

void *myMalloc31(size_t byteCount);
void *myMalloc32(size_t byteCount);
void *myMalloc33(size_t byteCount);
void *myMalloc34(size_t byteCount);
void *myMalloc35(size_t byteCount);
void *myMalloc36(size_t byteCount);
void *myMalloc37(size_t byteCount);
void *myMalloc38(size_t byteCount);
void *myMalloc39(size_t byteCount);
void *myMalloc40(size_t byteCount);

void *myMalloc41(size_t byteCount);
void *myMalloc42(size_t byteCount);
void *myMalloc43(size_t byteCount);
void *myMalloc44(size_t byteCount);
void *myMalloc45(size_t byteCount);
void *myMalloc46(size_t byteCount);
void *myMalloc47(size_t byteCount);
void *myMalloc48(size_t byteCount);
void *myMalloc49(size_t byteCount);
void *myMalloc50(size_t byteCount);

void *myMalloc51(size_t byteCount);
void *myMalloc52(size_t byteCount);
void *myMalloc53(size_t byteCount);
void *myMalloc54(size_t byteCount);
void *myMalloc55(size_t byteCount);
void *myMalloc56(size_t byteCount);
void *myMalloc57(size_t byteCount);
void *myMalloc58(size_t byteCount);
void *myMalloc59(size_t byteCount);
void *myMalloc60(size_t byteCount);

void *myMalloc61(size_t byteCount);
void *myMalloc62(size_t byteCount);
void *myMalloc63(size_t byteCount);
void *myMalloc64(size_t byteCount);
void *myMalloc65(size_t byteCount);
void *myMalloc66(size_t byteCount);
void *myMalloc67(size_t byteCount);
void *myMalloc68(size_t byteCount);
void *myMalloc69(size_t byteCount);
void *myMalloc70(size_t byteCount);

void *myMalloc71(size_t byteCount);
void *myMalloc72(size_t byteCount);
void *myMalloc73(size_t byteCount);
void *myMalloc74(size_t byteCount);
void *myMalloc75(size_t byteCount);
void *myMalloc76(size_t byteCount);
void *myMalloc77(size_t byteCount);
void *myMalloc78(size_t byteCount);
void *myMalloc79(size_t byteCount);
void *myMalloc80(size_t byteCount);

void *myMalloc81(size_t byteCount);
void *myMalloc82(size_t byteCount);
void *myMalloc83(size_t byteCount);
void *myMalloc84(size_t byteCount);
void *myMalloc85(size_t byteCount);
void *myMalloc86(size_t byteCount);
void *myMalloc87(size_t byteCount);
void *myMalloc88(size_t byteCount);
void *myMalloc89(size_t byteCount);
void *myMalloc90(size_t byteCount);

void *myMalloc91(size_t byteCount);
void *myMalloc92(size_t byteCount);
void *myMalloc93(size_t byteCount);
void *myMalloc94(size_t byteCount);
void *myMalloc95(size_t byteCount);
void *myMalloc96(size_t byteCount);
void *myMalloc97(size_t byteCount);
void *myMalloc98(size_t byteCount);
void *myMalloc99(size_t byteCount);
void *myMalloc100(size_t byteCount);

void *myMalloc101(size_t byteCount);
void *myMalloc102(size_t byteCount);
void *myMalloc103(size_t byteCount);
void *myMalloc104(size_t byteCount);
void *myMalloc105(size_t byteCount);
void *myMalloc106(size_t byteCount);
void *myMalloc107(size_t byteCount);
void *myMalloc108(size_t byteCount);
void *myMalloc109(size_t byteCount);
void *myMalloc110(size_t byteCount);

void *myMalloc111(size_t byteCount);
void *myMalloc112(size_t byteCount);
void *myMalloc113(size_t byteCount);
void *myMalloc114(size_t byteCount);
void *myMalloc115(size_t byteCount);
void *myMalloc116(size_t byteCount);
void *myMalloc117(size_t byteCount);
void *myMalloc118(size_t byteCount);
void *myMalloc119(size_t byteCount);
void *myMalloc120(size_t byteCount);

void *myMalloc121(size_t byteCount);
void *myMalloc122(size_t byteCount);
void *myMalloc123(size_t byteCount);
void *myMalloc124(size_t byteCount);
void *myMalloc125(size_t byteCount);
void *myMalloc126(size_t byteCount);
void *myMalloc127(size_t byteCount);
void *myMalloc128(size_t byteCount);
void *myMalloc129(size_t byteCount);
void *myMalloc130(size_t byteCount);

void *myMalloc131(size_t byteCount);
void *myMalloc132(size_t byteCount);
void *myMalloc133(size_t byteCount);
void *myMalloc134(size_t byteCount);
void *myMalloc135(size_t byteCount);
void *myMalloc136(size_t byteCount);
void *myMalloc137(size_t byteCount);
void *myMalloc138(size_t byteCount);
void *myMalloc139(size_t byteCount);
void *myMalloc140(size_t byteCount);

void *myMalloc141(size_t byteCount);
void *myMalloc142(size_t byteCount);
void *myMalloc143(size_t byteCount);
void *myMalloc144(size_t byteCount);
void *myMalloc145(size_t byteCount);
void *myMalloc146(size_t byteCount);
void *myMalloc147(size_t byteCount);
void *myMalloc148(size_t byteCount);
void *myMalloc149(size_t byteCount);
void *myMalloc150(size_t byteCount);

void* popMallocMethod();

void initDiyMallocMethod();


#endif //NATIVELEAKPROF_MALLOC_METHOD_H
