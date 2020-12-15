#include "malloc_method.h"
#include "Log.h"
#include "memory_manager.h"

std::stack<void*> mallocStk;

void *myMalloc1(size_t byteCount) {
    return nlp::invokeMalloc(1, byteCount);
}
void *myMalloc2(size_t byteCount) {
    return nlp::invokeMalloc(2, byteCount);
}
void *myMalloc3(size_t byteCount) {
    return nlp::invokeMalloc(3, byteCount);
}
void *myMalloc4(size_t byteCount) {
    return nlp::invokeMalloc(4, byteCount);
}
void *myMalloc5(size_t byteCount) {
    return nlp::invokeMalloc(5, byteCount);
}
void *myMalloc6(size_t byteCount) {
    return nlp::invokeMalloc(6, byteCount);
}
void *myMalloc7(size_t byteCount) {
    return nlp::invokeMalloc(7, byteCount);
}
void *myMalloc8(size_t byteCount) {
    return nlp::invokeMalloc(8, byteCount);
}
void *myMalloc9(size_t byteCount) {
    return nlp::invokeMalloc(9, byteCount);
}
void *myMalloc10(size_t byteCount) {
    return nlp::invokeMalloc(10, byteCount);
}

void *myMalloc11(size_t byteCount) {
    return nlp::invokeMalloc(11, byteCount);
}
void *myMalloc12(size_t byteCount) {
    return nlp::invokeMalloc(12, byteCount);
}
void *myMalloc13(size_t byteCount) {
    return nlp::invokeMalloc(13, byteCount);
}
void *myMalloc14(size_t byteCount) {
    return nlp::invokeMalloc(14, byteCount);
}
void *myMalloc15(size_t byteCount) {
    return nlp::invokeMalloc(15, byteCount);
}
void *myMalloc16(size_t byteCount) {
    return nlp::invokeMalloc(16, byteCount);
}
void *myMalloc17(size_t byteCount) {
    return nlp::invokeMalloc(17, byteCount);
}
void *myMalloc18(size_t byteCount) {
    return nlp::invokeMalloc(18, byteCount);
}
void *myMalloc19(size_t byteCount) {
    return nlp::invokeMalloc(19, byteCount);
}
void *myMalloc20(size_t byteCount) {
    return nlp::invokeMalloc(20, byteCount);
}

void *myMalloc21(size_t byteCount) {
    return nlp::invokeMalloc(21, byteCount);
}
void *myMalloc22(size_t byteCount) {
    return nlp::invokeMalloc(22, byteCount);
}
void *myMalloc23(size_t byteCount) {
    return nlp::invokeMalloc(23, byteCount);
}
void *myMalloc24(size_t byteCount) {
    return nlp::invokeMalloc(24, byteCount);
}
void *myMalloc25(size_t byteCount) {
    return nlp::invokeMalloc(25, byteCount);
}
void *myMalloc26(size_t byteCount) {
    return nlp::invokeMalloc(26, byteCount);
}
void *myMalloc27(size_t byteCount) {
    return nlp::invokeMalloc(27, byteCount);
}
void *myMalloc28(size_t byteCount) {
    return nlp::invokeMalloc(28, byteCount);
}
void *myMalloc29(size_t byteCount) {
    return nlp::invokeMalloc(29, byteCount);
}
void *myMalloc30(size_t byteCount) {
    return nlp::invokeMalloc(30, byteCount);
}

void *myMalloc31(size_t byteCount) {
    return nlp::invokeMalloc(31, byteCount);
}
void *myMalloc32(size_t byteCount) {
    return nlp::invokeMalloc(32, byteCount);
}
void *myMalloc33(size_t byteCount) {
    return nlp::invokeMalloc(33, byteCount);
}
void *myMalloc34(size_t byteCount) {
    return nlp::invokeMalloc(34, byteCount);
}
void *myMalloc35(size_t byteCount) {
    return nlp::invokeMalloc(35, byteCount);
}
void *myMalloc36(size_t byteCount) {
    return nlp::invokeMalloc(36, byteCount);
}
void *myMalloc37(size_t byteCount) {
    return nlp::invokeMalloc(37, byteCount);
}
void *myMalloc38(size_t byteCount) {
    return nlp::invokeMalloc(38, byteCount);
}
void *myMalloc39(size_t byteCount) {
    return nlp::invokeMalloc(39, byteCount);
}
void *myMalloc40(size_t byteCount) {
    return nlp::invokeMalloc(40, byteCount);
}

void *myMalloc41(size_t byteCount) {
    return nlp::invokeMalloc(41, byteCount);
}
void *myMalloc42(size_t byteCount) {
    return nlp::invokeMalloc(42, byteCount);
}
void *myMalloc43(size_t byteCount) {
    return nlp::invokeMalloc(43, byteCount);
}
void *myMalloc44(size_t byteCount) {
    return nlp::invokeMalloc(44, byteCount);
}
void *myMalloc45(size_t byteCount) {
    return nlp::invokeMalloc(45, byteCount);
}
void *myMalloc46(size_t byteCount) {
    return nlp::invokeMalloc(46, byteCount);
}
void *myMalloc47(size_t byteCount) {
    return nlp::invokeMalloc(47, byteCount);
}
void *myMalloc48(size_t byteCount) {
    return nlp::invokeMalloc(48, byteCount);
}
void *myMalloc49(size_t byteCount) {
    return nlp::invokeMalloc(49, byteCount);
}
void *myMalloc50(size_t byteCount) {
    return nlp::invokeMalloc(50, byteCount);
}

void *myMalloc51(size_t byteCount) {
    return nlp::invokeMalloc(51, byteCount);
}
void *myMalloc52(size_t byteCount) {
    return nlp::invokeMalloc(52, byteCount);
}
void *myMalloc53(size_t byteCount) {
    return nlp::invokeMalloc(53, byteCount);
}
void *myMalloc54(size_t byteCount) {
    return nlp::invokeMalloc(54, byteCount);
}
void *myMalloc55(size_t byteCount) {
    return nlp::invokeMalloc(55, byteCount);
}
void *myMalloc56(size_t byteCount) {
    return nlp::invokeMalloc(56, byteCount);
}
void *myMalloc57(size_t byteCount) {
    return nlp::invokeMalloc(57, byteCount);
}
void *myMalloc58(size_t byteCount) {
    return nlp::invokeMalloc(58, byteCount);
}
void *myMalloc59(size_t byteCount) {
    return nlp::invokeMalloc(59, byteCount);
}
void *myMalloc60(size_t byteCount) {
    return nlp::invokeMalloc(60, byteCount);
}

void *myMalloc61(size_t byteCount) {
    return nlp::invokeMalloc(61, byteCount);
}
void *myMalloc62(size_t byteCount) {
    return nlp::invokeMalloc(62, byteCount);
}
void *myMalloc63(size_t byteCount) {
    return nlp::invokeMalloc(63, byteCount);
}
void *myMalloc64(size_t byteCount) {
    return nlp::invokeMalloc(64, byteCount);
}
void *myMalloc65(size_t byteCount) {
    return nlp::invokeMalloc(65, byteCount);
}
void *myMalloc66(size_t byteCount) {
    return nlp::invokeMalloc(66, byteCount);
}
void *myMalloc67(size_t byteCount) {
    return nlp::invokeMalloc(67, byteCount);
}
void *myMalloc68(size_t byteCount) {
    return nlp::invokeMalloc(68, byteCount);
}
void *myMalloc69(size_t byteCount) {
    return nlp::invokeMalloc(69, byteCount);
}
void *myMalloc70(size_t byteCount) {
    return nlp::invokeMalloc(70, byteCount);
}

void *myMalloc71(size_t byteCount) {
    return nlp::invokeMalloc(71, byteCount);
}
void *myMalloc72(size_t byteCount) {
    return nlp::invokeMalloc(72, byteCount);
}
void *myMalloc73(size_t byteCount) {
    return nlp::invokeMalloc(73, byteCount);
}
void *myMalloc74(size_t byteCount) {
    return nlp::invokeMalloc(74, byteCount);
}
void *myMalloc75(size_t byteCount) {
    return nlp::invokeMalloc(75, byteCount);
}
void *myMalloc76(size_t byteCount) {
    return nlp::invokeMalloc(76, byteCount);
}
void *myMalloc77(size_t byteCount) {
    return nlp::invokeMalloc(77, byteCount);
}
void *myMalloc78(size_t byteCount) {
    return nlp::invokeMalloc(78, byteCount);
}
void *myMalloc79(size_t byteCount) {
    return nlp::invokeMalloc(79, byteCount);
}
void *myMalloc80(size_t byteCount) {
    return nlp::invokeMalloc(80, byteCount);
}

void *myMalloc81(size_t byteCount) {
    return nlp::invokeMalloc(81, byteCount);
}
void *myMalloc82(size_t byteCount) {
    return nlp::invokeMalloc(82, byteCount);
}
void *myMalloc83(size_t byteCount) {
    return nlp::invokeMalloc(83, byteCount);
}
void *myMalloc84(size_t byteCount) {
    return nlp::invokeMalloc(84, byteCount);
}
void *myMalloc85(size_t byteCount) {
    return nlp::invokeMalloc(85, byteCount);
}
void *myMalloc86(size_t byteCount) {
    return nlp::invokeMalloc(86, byteCount);
}
void *myMalloc87(size_t byteCount) {
    return nlp::invokeMalloc(87, byteCount);
}
void *myMalloc88(size_t byteCount) {
    return nlp::invokeMalloc(88, byteCount);
}
void *myMalloc89(size_t byteCount) {
    return nlp::invokeMalloc(89, byteCount);
}
void *myMalloc90(size_t byteCount) {
    return nlp::invokeMalloc(90, byteCount);
}

void *myMalloc91(size_t byteCount) {
    return nlp::invokeMalloc(91, byteCount);
}
void *myMalloc92(size_t byteCount) {
    return nlp::invokeMalloc(92, byteCount);
}
void *myMalloc93(size_t byteCount) {
    return nlp::invokeMalloc(93, byteCount);
}
void *myMalloc94(size_t byteCount) {
    return nlp::invokeMalloc(94, byteCount);
}
void *myMalloc95(size_t byteCount) {
    return nlp::invokeMalloc(95, byteCount);
}
void *myMalloc96(size_t byteCount) {
    return nlp::invokeMalloc(96, byteCount);
}
void *myMalloc97(size_t byteCount) {
    return nlp::invokeMalloc(97, byteCount);
}
void *myMalloc98(size_t byteCount) {
    return nlp::invokeMalloc(98, byteCount);
}
void *myMalloc99(size_t byteCount) {
    return nlp::invokeMalloc(99, byteCount);
}
void *myMalloc100(size_t byteCount) {
    return nlp::invokeMalloc(100, byteCount);
}

void *myMalloc101(size_t byteCount) {
    return nlp::invokeMalloc(101, byteCount);
}
void *myMalloc102(size_t byteCount) {
    return nlp::invokeMalloc(102, byteCount);
}
void *myMalloc103(size_t byteCount) {
    return nlp::invokeMalloc(103, byteCount);
}
void *myMalloc104(size_t byteCount) {
    return nlp::invokeMalloc(104, byteCount);
}
void *myMalloc105(size_t byteCount) {
    return nlp::invokeMalloc(105, byteCount);
}
void *myMalloc106(size_t byteCount) {
    return nlp::invokeMalloc(106, byteCount);
}
void *myMalloc107(size_t byteCount) {
    return nlp::invokeMalloc(107, byteCount);
}
void *myMalloc108(size_t byteCount) {
    return nlp::invokeMalloc(108, byteCount);
}
void *myMalloc109(size_t byteCount) {
    return nlp::invokeMalloc(109, byteCount);
}
void *myMalloc110(size_t byteCount) {
    return nlp::invokeMalloc(110, byteCount);
}

void *myMalloc111(size_t byteCount) {
    return nlp::invokeMalloc(111, byteCount);
}
void *myMalloc112(size_t byteCount) {
    return nlp::invokeMalloc(112, byteCount);
}
void *myMalloc113(size_t byteCount) {
    return nlp::invokeMalloc(113, byteCount);
}
void *myMalloc114(size_t byteCount) {
    return nlp::invokeMalloc(114, byteCount);
}
void *myMalloc115(size_t byteCount) {
    return nlp::invokeMalloc(115, byteCount);
}
void *myMalloc116(size_t byteCount) {
    return nlp::invokeMalloc(116, byteCount);
}
void *myMalloc117(size_t byteCount) {
    return nlp::invokeMalloc(117, byteCount);
}
void *myMalloc118(size_t byteCount) {
    return nlp::invokeMalloc(118, byteCount);
}
void *myMalloc119(size_t byteCount) {
    return nlp::invokeMalloc(119, byteCount);
}
void *myMalloc120(size_t byteCount) {
    return nlp::invokeMalloc(120, byteCount);
}

void *myMalloc121(size_t byteCount) {
    return nlp::invokeMalloc(121, byteCount);
}
void *myMalloc122(size_t byteCount) {
    return nlp::invokeMalloc(122, byteCount);
}
void *myMalloc123(size_t byteCount) {
    return nlp::invokeMalloc(123, byteCount);
}
void *myMalloc124(size_t byteCount) {
    return nlp::invokeMalloc(124, byteCount);
}
void *myMalloc125(size_t byteCount) {
    return nlp::invokeMalloc(125, byteCount);
}
void *myMalloc126(size_t byteCount) {
    return nlp::invokeMalloc(126, byteCount);
}
void *myMalloc127(size_t byteCount) {
    return nlp::invokeMalloc(127, byteCount);
}
void *myMalloc128(size_t byteCount) {
    return nlp::invokeMalloc(128, byteCount);
}
void *myMalloc129(size_t byteCount) {
    return nlp::invokeMalloc(129, byteCount);
}
void *myMalloc130(size_t byteCount) {
    return nlp::invokeMalloc(130, byteCount);
}

void *myMalloc131(size_t byteCount) {
    return nlp::invokeMalloc(131, byteCount);
}
void *myMalloc132(size_t byteCount) {
    return nlp::invokeMalloc(132, byteCount);
}
void *myMalloc133(size_t byteCount) {
    return nlp::invokeMalloc(133, byteCount);
}
void *myMalloc134(size_t byteCount) {
    return nlp::invokeMalloc(134, byteCount);
}
void *myMalloc135(size_t byteCount) {
    return nlp::invokeMalloc(135, byteCount);
}
void *myMalloc136(size_t byteCount) {
    return nlp::invokeMalloc(136, byteCount);
}
void *myMalloc137(size_t byteCount) {
    return nlp::invokeMalloc(137, byteCount);
}
void *myMalloc138(size_t byteCount) {
    return nlp::invokeMalloc(138, byteCount);
}
void *myMalloc139(size_t byteCount) {
    return nlp::invokeMalloc(139, byteCount);
}
void *myMalloc140(size_t byteCount) {
    return nlp::invokeMalloc(140, byteCount);
}

void *myMalloc141(size_t byteCount) {
    return nlp::invokeMalloc(141, byteCount);
}
void *myMalloc142(size_t byteCount) {
    return nlp::invokeMalloc(142, byteCount);
}
void *myMalloc143(size_t byteCount) {
    return nlp::invokeMalloc(143, byteCount);
}
void *myMalloc144(size_t byteCount) {
    return nlp::invokeMalloc(144, byteCount);
}
void *myMalloc145(size_t byteCount) {
    return nlp::invokeMalloc(145, byteCount);
}
void *myMalloc146(size_t byteCount) {
    return nlp::invokeMalloc(146, byteCount);
}
void *myMalloc147(size_t byteCount) {
    return nlp::invokeMalloc(147, byteCount);
}
void *myMalloc148(size_t byteCount) {
    return nlp::invokeMalloc(148, byteCount);
}
void *myMalloc149(size_t byteCount) {
    return nlp::invokeMalloc(149, byteCount);
}
void *myMalloc150(size_t byteCount) {
    return nlp::invokeMalloc(150, byteCount);
}

void* popMallocMethod() {
    void *method = (void*) mallocStk.top();
    mallocStk.pop();
    return method;
}

void initDiyMallocMethod() {
    mallocStk.push((void *) myMalloc1);
    mallocStk.push((void *) myMalloc2);
    mallocStk.push((void *) myMalloc3);
    mallocStk.push((void *) myMalloc4);
    mallocStk.push((void *) myMalloc5);
    mallocStk.push((void *) myMalloc6);
    mallocStk.push((void *) myMalloc7);
    mallocStk.push((void *) myMalloc8);
    mallocStk.push((void *) myMalloc9);
    mallocStk.push((void *) myMalloc10);

    mallocStk.push((void *) myMalloc11);
    mallocStk.push((void *) myMalloc12);
    mallocStk.push((void *) myMalloc13);
    mallocStk.push((void *) myMalloc14);
    mallocStk.push((void *) myMalloc15);
    mallocStk.push((void *) myMalloc16);
    mallocStk.push((void *) myMalloc17);
    mallocStk.push((void *) myMalloc18);
    mallocStk.push((void *) myMalloc19);
    mallocStk.push((void *) myMalloc20);

    mallocStk.push((void *) myMalloc21);
    mallocStk.push((void *) myMalloc22);
    mallocStk.push((void *) myMalloc23);
    mallocStk.push((void *) myMalloc24);
    mallocStk.push((void *) myMalloc25);
    mallocStk.push((void *) myMalloc26);
    mallocStk.push((void *) myMalloc27);
    mallocStk.push((void *) myMalloc28);
    mallocStk.push((void *) myMalloc29);
    mallocStk.push((void *) myMalloc30);

    mallocStk.push((void *) myMalloc31);
    mallocStk.push((void *) myMalloc32);
    mallocStk.push((void *) myMalloc33);
    mallocStk.push((void *) myMalloc34);
    mallocStk.push((void *) myMalloc35);
    mallocStk.push((void *) myMalloc36);
    mallocStk.push((void *) myMalloc37);
    mallocStk.push((void *) myMalloc38);
    mallocStk.push((void *) myMalloc39);
    mallocStk.push((void *) myMalloc40);

    mallocStk.push((void *) myMalloc41);
    mallocStk.push((void *) myMalloc42);
    mallocStk.push((void *) myMalloc43);
    mallocStk.push((void *) myMalloc44);
    mallocStk.push((void *) myMalloc45);
    mallocStk.push((void *) myMalloc46);
    mallocStk.push((void *) myMalloc47);
    mallocStk.push((void *) myMalloc48);
    mallocStk.push((void *) myMalloc49);
    mallocStk.push((void *) myMalloc50);

    mallocStk.push((void *) myMalloc51);
    mallocStk.push((void *) myMalloc52);
    mallocStk.push((void *) myMalloc53);
    mallocStk.push((void *) myMalloc54);
    mallocStk.push((void *) myMalloc55);
    mallocStk.push((void *) myMalloc56);
    mallocStk.push((void *) myMalloc57);
    mallocStk.push((void *) myMalloc58);
    mallocStk.push((void *) myMalloc59);
    mallocStk.push((void *) myMalloc60);

    mallocStk.push((void *) myMalloc61);
    mallocStk.push((void *) myMalloc62);
    mallocStk.push((void *) myMalloc63);
    mallocStk.push((void *) myMalloc64);
    mallocStk.push((void *) myMalloc65);
    mallocStk.push((void *) myMalloc66);
    mallocStk.push((void *) myMalloc67);
    mallocStk.push((void *) myMalloc68);
    mallocStk.push((void *) myMalloc69);
    mallocStk.push((void *) myMalloc70);

    mallocStk.push((void *) myMalloc71);
    mallocStk.push((void *) myMalloc72);
    mallocStk.push((void *) myMalloc73);
    mallocStk.push((void *) myMalloc74);
    mallocStk.push((void *) myMalloc75);
    mallocStk.push((void *) myMalloc76);
    mallocStk.push((void *) myMalloc77);
    mallocStk.push((void *) myMalloc78);
    mallocStk.push((void *) myMalloc79);
    mallocStk.push((void *) myMalloc80);

    mallocStk.push((void *) myMalloc81);
    mallocStk.push((void *) myMalloc82);
    mallocStk.push((void *) myMalloc83);
    mallocStk.push((void *) myMalloc84);
    mallocStk.push((void *) myMalloc85);
    mallocStk.push((void *) myMalloc86);
    mallocStk.push((void *) myMalloc87);
    mallocStk.push((void *) myMalloc88);
    mallocStk.push((void *) myMalloc89);
    mallocStk.push((void *) myMalloc90);

    mallocStk.push((void *) myMalloc91);
    mallocStk.push((void *) myMalloc92);
    mallocStk.push((void *) myMalloc93);
    mallocStk.push((void *) myMalloc94);
    mallocStk.push((void *) myMalloc95);
    mallocStk.push((void *) myMalloc96);
    mallocStk.push((void *) myMalloc97);
    mallocStk.push((void *) myMalloc98);
    mallocStk.push((void *) myMalloc99);
    mallocStk.push((void *) myMalloc100);

    mallocStk.push((void *) myMalloc101);
    mallocStk.push((void *) myMalloc102);
    mallocStk.push((void *) myMalloc103);
    mallocStk.push((void *) myMalloc104);
    mallocStk.push((void *) myMalloc105);
    mallocStk.push((void *) myMalloc106);
    mallocStk.push((void *) myMalloc107);
    mallocStk.push((void *) myMalloc108);
    mallocStk.push((void *) myMalloc109);
    mallocStk.push((void *) myMalloc110);

    mallocStk.push((void *) myMalloc111);
    mallocStk.push((void *) myMalloc112);
    mallocStk.push((void *) myMalloc113);
    mallocStk.push((void *) myMalloc114);
    mallocStk.push((void *) myMalloc115);
    mallocStk.push((void *) myMalloc116);
    mallocStk.push((void *) myMalloc117);
    mallocStk.push((void *) myMalloc118);
    mallocStk.push((void *) myMalloc119);
    mallocStk.push((void *) myMalloc120);

    mallocStk.push((void *) myMalloc121);
    mallocStk.push((void *) myMalloc122);
    mallocStk.push((void *) myMalloc123);
    mallocStk.push((void *) myMalloc124);
    mallocStk.push((void *) myMalloc125);
    mallocStk.push((void *) myMalloc126);
    mallocStk.push((void *) myMalloc127);
    mallocStk.push((void *) myMalloc128);
    mallocStk.push((void *) myMalloc129);
    mallocStk.push((void *) myMalloc130);

    mallocStk.push((void *) myMalloc131);
    mallocStk.push((void *) myMalloc132);
    mallocStk.push((void *) myMalloc133);
    mallocStk.push((void *) myMalloc134);
    mallocStk.push((void *) myMalloc135);
    mallocStk.push((void *) myMalloc136);
    mallocStk.push((void *) myMalloc137);
    mallocStk.push((void *) myMalloc138);
    mallocStk.push((void *) myMalloc139);
    mallocStk.push((void *) myMalloc140);

    mallocStk.push((void *) myMalloc141);
    mallocStk.push((void *) myMalloc142);
    mallocStk.push((void *) myMalloc143);
    mallocStk.push((void *) myMalloc144);
    mallocStk.push((void *) myMalloc145);
    mallocStk.push((void *) myMalloc146);
    mallocStk.push((void *) myMalloc147);
    mallocStk.push((void *) myMalloc148);
    mallocStk.push((void *) myMalloc149);
    mallocStk.push((void *) myMalloc150);
}

