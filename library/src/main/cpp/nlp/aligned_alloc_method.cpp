//
// Created by chenwangwang on 2020/12/10.
//

#include "aligned_alloc_method.h"
#include "Log.h"
#include "memory_manager.h"

std::stack<void*> alignedAllocStk;

void *MyAlignedAlloc1(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(1, alignment, byteCount);
}
void *MyAlignedAlloc2(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(2, alignment, byteCount);
}
void *MyAlignedAlloc3(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(3, alignment, byteCount);
}
void *MyAlignedAlloc4(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(4, alignment, byteCount);
}
void *MyAlignedAlloc5(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(5, alignment, byteCount);
}
void *MyAlignedAlloc6(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(6, alignment, byteCount);
}
void *MyAlignedAlloc7(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(7, alignment, byteCount);
}
void *MyAlignedAlloc8(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(8, alignment, byteCount);
}
void *MyAlignedAlloc9(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(9, alignment, byteCount);
}
void *MyAlignedAlloc10(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(10, alignment, byteCount);
}

void *MyAlignedAlloc11(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(11, alignment, byteCount);
}
void *MyAlignedAlloc12(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(12, alignment, byteCount);
}
void *MyAlignedAlloc13(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(13, alignment, byteCount);
}
void *MyAlignedAlloc14(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(14, alignment, byteCount);
}
void *MyAlignedAlloc15(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(15, alignment, byteCount);
}
void *MyAlignedAlloc16(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(16, alignment, byteCount);
}
void *MyAlignedAlloc17(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(17, alignment, byteCount);
}
void *MyAlignedAlloc18(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(18, alignment, byteCount);
}
void *MyAlignedAlloc19(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(19, alignment, byteCount);
}
void *MyAlignedAlloc20(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(20, alignment, byteCount);
}

void *MyAlignedAlloc21(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(21, alignment, byteCount);
}
void *MyAlignedAlloc22(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(22, alignment, byteCount);
}
void *MyAlignedAlloc23(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(23, alignment, byteCount);
}
void *MyAlignedAlloc24(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(24, alignment, byteCount);
}
void *MyAlignedAlloc25(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(25, alignment, byteCount);
}
void *MyAlignedAlloc26(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(26, alignment, byteCount);
}
void *MyAlignedAlloc27(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(27, alignment, byteCount);
}
void *MyAlignedAlloc28(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(28, alignment, byteCount);
}
void *MyAlignedAlloc29(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(29, alignment, byteCount);
}
void *MyAlignedAlloc30(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(30, alignment, byteCount);
}

void *MyAlignedAlloc31(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(31, alignment, byteCount);
}
void *MyAlignedAlloc32(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(32, alignment, byteCount);
}
void *MyAlignedAlloc33(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(33, alignment, byteCount);
}
void *MyAlignedAlloc34(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(34, alignment, byteCount);
}
void *MyAlignedAlloc35(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(35, alignment, byteCount);
}
void *MyAlignedAlloc36(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(36, alignment, byteCount);
}
void *MyAlignedAlloc37(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(37, alignment, byteCount);
}
void *MyAlignedAlloc38(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(38, alignment, byteCount);
}
void *MyAlignedAlloc39(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(39, alignment, byteCount);
}
void *MyAlignedAlloc40(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(40, alignment, byteCount);
}

void *MyAlignedAlloc41(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(41, alignment, byteCount);
}
void *MyAlignedAlloc42(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(42, alignment, byteCount);
}
void *MyAlignedAlloc43(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(43, alignment, byteCount);
}
void *MyAlignedAlloc44(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(44, alignment, byteCount);
}
void *MyAlignedAlloc45(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(45, alignment, byteCount);
}
void *MyAlignedAlloc46(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(46, alignment, byteCount);
}
void *MyAlignedAlloc47(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(47, alignment, byteCount);
}
void *MyAlignedAlloc48(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(48, alignment, byteCount);
}
void *MyAlignedAlloc49(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(49, alignment, byteCount);
}
void *MyAlignedAlloc50(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(50, alignment, byteCount);
}

void *MyAlignedAlloc51(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(51, alignment, byteCount);
}
void *MyAlignedAlloc52(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(52, alignment, byteCount);
}
void *MyAlignedAlloc53(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(53, alignment, byteCount);
}
void *MyAlignedAlloc54(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(54, alignment, byteCount);
}
void *MyAlignedAlloc55(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(55, alignment, byteCount);
}
void *MyAlignedAlloc56(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(56, alignment, byteCount);
}
void *MyAlignedAlloc57(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(57, alignment, byteCount);
}
void *MyAlignedAlloc58(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(58, alignment, byteCount);
}
void *MyAlignedAlloc59(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(59, alignment, byteCount);
}
void *MyAlignedAlloc60(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(60, alignment, byteCount);
}

void *MyAlignedAlloc61(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(61, alignment, byteCount);
}
void *MyAlignedAlloc62(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(62, alignment, byteCount);
}
void *MyAlignedAlloc63(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(63, alignment, byteCount);
}
void *MyAlignedAlloc64(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(64, alignment, byteCount);
}
void *MyAlignedAlloc65(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(65, alignment, byteCount);
}
void *MyAlignedAlloc66(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(66, alignment, byteCount);
}
void *MyAlignedAlloc67(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(67, alignment, byteCount);
}
void *MyAlignedAlloc68(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(68, alignment, byteCount);
}
void *MyAlignedAlloc69(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(69, alignment, byteCount);
}
void *MyAlignedAlloc70(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(70, alignment, byteCount);
}

void *MyAlignedAlloc71(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(71, alignment, byteCount);
}
void *MyAlignedAlloc72(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(72, alignment, byteCount);
}
void *MyAlignedAlloc73(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(73, alignment, byteCount);
}
void *MyAlignedAlloc74(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(74, alignment, byteCount);
}
void *MyAlignedAlloc75(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(75, alignment, byteCount);
}
void *MyAlignedAlloc76(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(76, alignment, byteCount);
}
void *MyAlignedAlloc77(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(77, alignment, byteCount);
}
void *MyAlignedAlloc78(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(78, alignment, byteCount);
}
void *MyAlignedAlloc79(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(79, alignment, byteCount);
}
void *MyAlignedAlloc80(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(80, alignment, byteCount);
}

void *MyAlignedAlloc81(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(81, alignment, byteCount);
}
void *MyAlignedAlloc82(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(82, alignment, byteCount);
}
void *MyAlignedAlloc83(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(83, alignment, byteCount);
}
void *MyAlignedAlloc84(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(84, alignment, byteCount);
}
void *MyAlignedAlloc85(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(85, alignment, byteCount);
}
void *MyAlignedAlloc86(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(86, alignment, byteCount);
}
void *MyAlignedAlloc87(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(87, alignment, byteCount);
}
void *MyAlignedAlloc88(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(88, alignment, byteCount);
}
void *MyAlignedAlloc89(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(89, alignment, byteCount);
}
void *MyAlignedAlloc90(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(90, alignment, byteCount);
}

void *MyAlignedAlloc91(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(91, alignment, byteCount);
}
void *MyAlignedAlloc92(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(92, alignment, byteCount);
}
void *MyAlignedAlloc93(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(93, alignment, byteCount);
}
void *MyAlignedAlloc94(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(94, alignment, byteCount);
}
void *MyAlignedAlloc95(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(95, alignment, byteCount);
}
void *MyAlignedAlloc96(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(96, alignment, byteCount);
}
void *MyAlignedAlloc97(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(97, alignment, byteCount);
}
void *MyAlignedAlloc98(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(98, alignment, byteCount);
}
void *MyAlignedAlloc99(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(99, alignment, byteCount);
}
void *MyAlignedAlloc100(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(100, alignment, byteCount);
}

void *MyAlignedAlloc101(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(101, alignment, byteCount);
}
void *MyAlignedAlloc102(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(102, alignment, byteCount);
}
void *MyAlignedAlloc103(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(103, alignment, byteCount);
}
void *MyAlignedAlloc104(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(104, alignment, byteCount);
}
void *MyAlignedAlloc105(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(105, alignment, byteCount);
}
void *MyAlignedAlloc106(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(106, alignment, byteCount);
}
void *MyAlignedAlloc107(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(107, alignment, byteCount);
}
void *MyAlignedAlloc108(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(108, alignment, byteCount);
}
void *MyAlignedAlloc109(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(109, alignment, byteCount);
}
void *MyAlignedAlloc110(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(110, alignment, byteCount);
}

void *MyAlignedAlloc111(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(111, alignment, byteCount);
}
void *MyAlignedAlloc112(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(112, alignment, byteCount);
}
void *MyAlignedAlloc113(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(113, alignment, byteCount);
}
void *MyAlignedAlloc114(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(114, alignment, byteCount);
}
void *MyAlignedAlloc115(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(115, alignment, byteCount);
}
void *MyAlignedAlloc116(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(116, alignment, byteCount);
}
void *MyAlignedAlloc117(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(117, alignment, byteCount);
}
void *MyAlignedAlloc118(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(118, alignment, byteCount);
}
void *MyAlignedAlloc119(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(119, alignment, byteCount);
}
void *MyAlignedAlloc120(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(120, alignment, byteCount);
}

void *MyAlignedAlloc121(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(121, alignment, byteCount);
}
void *MyAlignedAlloc122(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(122, alignment, byteCount);
}
void *MyAlignedAlloc123(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(123, alignment, byteCount);
}
void *MyAlignedAlloc124(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(124, alignment, byteCount);
}
void *MyAlignedAlloc125(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(125, alignment, byteCount);
}
void *MyAlignedAlloc126(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(126, alignment, byteCount);
}
void *MyAlignedAlloc127(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(127, alignment, byteCount);
}
void *MyAlignedAlloc128(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(128, alignment, byteCount);
}
void *MyAlignedAlloc129(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(129, alignment, byteCount);
}
void *MyAlignedAlloc130(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(130, alignment, byteCount);
}

void *MyAlignedAlloc131(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(131, alignment, byteCount);
}
void *MyAlignedAlloc132(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(132, alignment, byteCount);
}
void *MyAlignedAlloc133(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(133, alignment, byteCount);
}
void *MyAlignedAlloc134(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(134, alignment, byteCount);
}
void *MyAlignedAlloc135(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(135, alignment, byteCount);
}
void *MyAlignedAlloc136(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(136, alignment, byteCount);
}
void *MyAlignedAlloc137(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(137, alignment, byteCount);
}
void *MyAlignedAlloc138(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(138, alignment, byteCount);
}
void *MyAlignedAlloc139(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(139, alignment, byteCount);
}
void *MyAlignedAlloc140(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(140, alignment, byteCount);
}

void *MyAlignedAlloc141(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(141, alignment, byteCount);
}
void *MyAlignedAlloc142(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(142, alignment, byteCount);
}
void *MyAlignedAlloc143(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(143, alignment, byteCount);
}
void *MyAlignedAlloc144(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(144, alignment, byteCount);
}
void *MyAlignedAlloc145(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(145, alignment, byteCount);
}
void *MyAlignedAlloc146(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(146, alignment, byteCount);
}
void *MyAlignedAlloc147(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(147, alignment, byteCount);
}
void *MyAlignedAlloc148(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(148, alignment, byteCount);
}
void *MyAlignedAlloc149(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(149, alignment, byteCount);
}
void *MyAlignedAlloc150(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc(150, alignment, byteCount);
}

void* popAlignedAllocMethod() {
    void *method = (void*) alignedAllocStk.top();
    alignedAllocStk.pop();
    return method;
}

void initDiyAlignedAllocMethod() {
    alignedAllocStk.push((void *) MyAlignedAlloc1);
    alignedAllocStk.push((void *) MyAlignedAlloc2);
    alignedAllocStk.push((void *) MyAlignedAlloc3);
    alignedAllocStk.push((void *) MyAlignedAlloc4);
    alignedAllocStk.push((void *) MyAlignedAlloc5);
    alignedAllocStk.push((void *) MyAlignedAlloc6);
    alignedAllocStk.push((void *) MyAlignedAlloc7);
    alignedAllocStk.push((void *) MyAlignedAlloc8);
    alignedAllocStk.push((void *) MyAlignedAlloc9);
    alignedAllocStk.push((void *) MyAlignedAlloc10);

    alignedAllocStk.push((void *) MyAlignedAlloc11);
    alignedAllocStk.push((void *) MyAlignedAlloc12);
    alignedAllocStk.push((void *) MyAlignedAlloc13);
    alignedAllocStk.push((void *) MyAlignedAlloc14);
    alignedAllocStk.push((void *) MyAlignedAlloc15);
    alignedAllocStk.push((void *) MyAlignedAlloc16);
    alignedAllocStk.push((void *) MyAlignedAlloc17);
    alignedAllocStk.push((void *) MyAlignedAlloc18);
    alignedAllocStk.push((void *) MyAlignedAlloc19);
    alignedAllocStk.push((void *) MyAlignedAlloc20);

    alignedAllocStk.push((void *) MyAlignedAlloc21);
    alignedAllocStk.push((void *) MyAlignedAlloc22);
    alignedAllocStk.push((void *) MyAlignedAlloc23);
    alignedAllocStk.push((void *) MyAlignedAlloc24);
    alignedAllocStk.push((void *) MyAlignedAlloc25);
    alignedAllocStk.push((void *) MyAlignedAlloc26);
    alignedAllocStk.push((void *) MyAlignedAlloc27);
    alignedAllocStk.push((void *) MyAlignedAlloc28);
    alignedAllocStk.push((void *) MyAlignedAlloc29);
    alignedAllocStk.push((void *) MyAlignedAlloc30);

    alignedAllocStk.push((void *) MyAlignedAlloc31);
    alignedAllocStk.push((void *) MyAlignedAlloc32);
    alignedAllocStk.push((void *) MyAlignedAlloc33);
    alignedAllocStk.push((void *) MyAlignedAlloc34);
    alignedAllocStk.push((void *) MyAlignedAlloc35);
    alignedAllocStk.push((void *) MyAlignedAlloc36);
    alignedAllocStk.push((void *) MyAlignedAlloc37);
    alignedAllocStk.push((void *) MyAlignedAlloc38);
    alignedAllocStk.push((void *) MyAlignedAlloc39);
    alignedAllocStk.push((void *) MyAlignedAlloc40);

    alignedAllocStk.push((void *) MyAlignedAlloc41);
    alignedAllocStk.push((void *) MyAlignedAlloc42);
    alignedAllocStk.push((void *) MyAlignedAlloc43);
    alignedAllocStk.push((void *) MyAlignedAlloc44);
    alignedAllocStk.push((void *) MyAlignedAlloc45);
    alignedAllocStk.push((void *) MyAlignedAlloc46);
    alignedAllocStk.push((void *) MyAlignedAlloc47);
    alignedAllocStk.push((void *) MyAlignedAlloc48);
    alignedAllocStk.push((void *) MyAlignedAlloc49);
    alignedAllocStk.push((void *) MyAlignedAlloc50);

    alignedAllocStk.push((void *) MyAlignedAlloc51);
    alignedAllocStk.push((void *) MyAlignedAlloc52);
    alignedAllocStk.push((void *) MyAlignedAlloc53);
    alignedAllocStk.push((void *) MyAlignedAlloc54);
    alignedAllocStk.push((void *) MyAlignedAlloc55);
    alignedAllocStk.push((void *) MyAlignedAlloc56);
    alignedAllocStk.push((void *) MyAlignedAlloc57);
    alignedAllocStk.push((void *) MyAlignedAlloc58);
    alignedAllocStk.push((void *) MyAlignedAlloc59);
    alignedAllocStk.push((void *) MyAlignedAlloc60);

    alignedAllocStk.push((void *) MyAlignedAlloc61);
    alignedAllocStk.push((void *) MyAlignedAlloc62);
    alignedAllocStk.push((void *) MyAlignedAlloc63);
    alignedAllocStk.push((void *) MyAlignedAlloc64);
    alignedAllocStk.push((void *) MyAlignedAlloc65);
    alignedAllocStk.push((void *) MyAlignedAlloc66);
    alignedAllocStk.push((void *) MyAlignedAlloc67);
    alignedAllocStk.push((void *) MyAlignedAlloc68);
    alignedAllocStk.push((void *) MyAlignedAlloc69);
    alignedAllocStk.push((void *) MyAlignedAlloc70);

    alignedAllocStk.push((void *) MyAlignedAlloc71);
    alignedAllocStk.push((void *) MyAlignedAlloc72);
    alignedAllocStk.push((void *) MyAlignedAlloc73);
    alignedAllocStk.push((void *) MyAlignedAlloc74);
    alignedAllocStk.push((void *) MyAlignedAlloc75);
    alignedAllocStk.push((void *) MyAlignedAlloc76);
    alignedAllocStk.push((void *) MyAlignedAlloc77);
    alignedAllocStk.push((void *) MyAlignedAlloc78);
    alignedAllocStk.push((void *) MyAlignedAlloc79);
    alignedAllocStk.push((void *) MyAlignedAlloc80);

    alignedAllocStk.push((void *) MyAlignedAlloc81);
    alignedAllocStk.push((void *) MyAlignedAlloc82);
    alignedAllocStk.push((void *) MyAlignedAlloc83);
    alignedAllocStk.push((void *) MyAlignedAlloc84);
    alignedAllocStk.push((void *) MyAlignedAlloc85);
    alignedAllocStk.push((void *) MyAlignedAlloc86);
    alignedAllocStk.push((void *) MyAlignedAlloc87);
    alignedAllocStk.push((void *) MyAlignedAlloc88);
    alignedAllocStk.push((void *) MyAlignedAlloc89);
    alignedAllocStk.push((void *) MyAlignedAlloc90);

    alignedAllocStk.push((void *) MyAlignedAlloc91);
    alignedAllocStk.push((void *) MyAlignedAlloc92);
    alignedAllocStk.push((void *) MyAlignedAlloc93);
    alignedAllocStk.push((void *) MyAlignedAlloc94);
    alignedAllocStk.push((void *) MyAlignedAlloc95);
    alignedAllocStk.push((void *) MyAlignedAlloc96);
    alignedAllocStk.push((void *) MyAlignedAlloc97);
    alignedAllocStk.push((void *) MyAlignedAlloc98);
    alignedAllocStk.push((void *) MyAlignedAlloc99);
    alignedAllocStk.push((void *) MyAlignedAlloc100);

    alignedAllocStk.push((void *) MyAlignedAlloc101);
    alignedAllocStk.push((void *) MyAlignedAlloc102);
    alignedAllocStk.push((void *) MyAlignedAlloc103);
    alignedAllocStk.push((void *) MyAlignedAlloc104);
    alignedAllocStk.push((void *) MyAlignedAlloc105);
    alignedAllocStk.push((void *) MyAlignedAlloc106);
    alignedAllocStk.push((void *) MyAlignedAlloc107);
    alignedAllocStk.push((void *) MyAlignedAlloc108);
    alignedAllocStk.push((void *) MyAlignedAlloc109);
    alignedAllocStk.push((void *) MyAlignedAlloc110);

    alignedAllocStk.push((void *) MyAlignedAlloc111);
    alignedAllocStk.push((void *) MyAlignedAlloc112);
    alignedAllocStk.push((void *) MyAlignedAlloc113);
    alignedAllocStk.push((void *) MyAlignedAlloc114);
    alignedAllocStk.push((void *) MyAlignedAlloc115);
    alignedAllocStk.push((void *) MyAlignedAlloc116);
    alignedAllocStk.push((void *) MyAlignedAlloc117);
    alignedAllocStk.push((void *) MyAlignedAlloc118);
    alignedAllocStk.push((void *) MyAlignedAlloc119);
    alignedAllocStk.push((void *) MyAlignedAlloc120);

    alignedAllocStk.push((void *) MyAlignedAlloc121);
    alignedAllocStk.push((void *) MyAlignedAlloc122);
    alignedAllocStk.push((void *) MyAlignedAlloc123);
    alignedAllocStk.push((void *) MyAlignedAlloc124);
    alignedAllocStk.push((void *) MyAlignedAlloc125);
    alignedAllocStk.push((void *) MyAlignedAlloc126);
    alignedAllocStk.push((void *) MyAlignedAlloc127);
    alignedAllocStk.push((void *) MyAlignedAlloc128);
    alignedAllocStk.push((void *) MyAlignedAlloc129);
    alignedAllocStk.push((void *) MyAlignedAlloc130);

    alignedAllocStk.push((void *) MyAlignedAlloc131);
    alignedAllocStk.push((void *) MyAlignedAlloc132);
    alignedAllocStk.push((void *) MyAlignedAlloc133);
    alignedAllocStk.push((void *) MyAlignedAlloc134);
    alignedAllocStk.push((void *) MyAlignedAlloc135);
    alignedAllocStk.push((void *) MyAlignedAlloc136);
    alignedAllocStk.push((void *) MyAlignedAlloc137);
    alignedAllocStk.push((void *) MyAlignedAlloc138);
    alignedAllocStk.push((void *) MyAlignedAlloc139);
    alignedAllocStk.push((void *) MyAlignedAlloc140);

    alignedAllocStk.push((void *) MyAlignedAlloc141);
    alignedAllocStk.push((void *) MyAlignedAlloc142);
    alignedAllocStk.push((void *) MyAlignedAlloc143);
    alignedAllocStk.push((void *) MyAlignedAlloc144);
    alignedAllocStk.push((void *) MyAlignedAlloc145);
    alignedAllocStk.push((void *) MyAlignedAlloc146);
    alignedAllocStk.push((void *) MyAlignedAlloc147);
    alignedAllocStk.push((void *) MyAlignedAlloc148);
    alignedAllocStk.push((void *) MyAlignedAlloc149);
    alignedAllocStk.push((void *) MyAlignedAlloc150);
}

