//
// Created by chenwangwang on 2020/12/10.
//

#include <queue>
#include "free_method.h"
#include "Log.h"
#include "memory_manager.h"

std::queue<void*> freeStk;

void myFree0(void* ptr) {
    nlp::invokeFree(0, ptr);
}
void myFree1(void* ptr) {
    nlp::invokeFree(1, ptr);
}
void myFree2(void* ptr) {
    nlp::invokeFree(2, ptr);
}
void myFree3(void* ptr) {
    nlp::invokeFree(3, ptr);
}
void myFree4(void* ptr) {
    nlp::invokeFree(4, ptr);
}
void myFree5(void* ptr) {
    nlp::invokeFree(5, ptr);
}
void myFree6(void* ptr) {
    nlp::invokeFree(6, ptr);
}
void myFree7(void* ptr) {
    nlp::invokeFree(7, ptr);
}
void myFree8(void* ptr) {
    nlp::invokeFree(8, ptr);
}
void myFree9(void* ptr) {
    nlp::invokeFree(9, ptr);
}
void myFree10(void* ptr) {
    nlp::invokeFree(10, ptr);
}

void myFree11(void* ptr) {
    nlp::invokeFree(11, ptr);
}
void myFree12(void* ptr) {
    nlp::invokeFree(12, ptr);
}
void myFree13(void* ptr) {
    nlp::invokeFree(13, ptr);
}
void myFree14(void* ptr) {
    nlp::invokeFree(14, ptr);
}
void myFree15(void* ptr) {
    nlp::invokeFree(15, ptr);
}
void myFree16(void* ptr) {
    nlp::invokeFree(16, ptr);
}
void myFree17(void* ptr) {
    nlp::invokeFree(17, ptr);
}
void myFree18(void* ptr) {
    nlp::invokeFree(18, ptr);
}
void myFree19(void* ptr) {
    nlp::invokeFree(19, ptr);
}
void myFree20(void* ptr) {
    nlp::invokeFree(20, ptr);
}

void myFree21(void* ptr) {
    nlp::invokeFree(21, ptr);
}
void myFree22(void* ptr) {
    nlp::invokeFree(22, ptr);
}
void myFree23(void* ptr) {
    nlp::invokeFree(23, ptr);
}
void myFree24(void* ptr) {
    nlp::invokeFree(24, ptr);
}
void myFree25(void* ptr) {
    nlp::invokeFree(25, ptr);
}
void myFree26(void* ptr) {
    nlp::invokeFree(26, ptr);
}
void myFree27(void* ptr) {
    nlp::invokeFree(27, ptr);
}
void myFree28(void* ptr) {
    nlp::invokeFree(28, ptr);
}
void myFree29(void* ptr) {
    nlp::invokeFree(29, ptr);
}
void myFree30(void* ptr) {
    nlp::invokeFree(30, ptr);
}

void myFree31(void* ptr) {
    nlp::invokeFree(31, ptr);
}
void myFree32(void* ptr) {
    nlp::invokeFree(32, ptr);
}
void myFree33(void* ptr) {
    nlp::invokeFree(33, ptr);
}
void myFree34(void* ptr) {
    nlp::invokeFree(34, ptr);
}
void myFree35(void* ptr) {
    nlp::invokeFree(35, ptr);
}
void myFree36(void* ptr) {
    nlp::invokeFree(36, ptr);
}
void myFree37(void* ptr) {
    nlp::invokeFree(37, ptr);
}
void myFree38(void* ptr) {
    nlp::invokeFree(38, ptr);
}
void myFree39(void* ptr) {
    nlp::invokeFree(39, ptr);
}
void myFree40(void* ptr) {
    nlp::invokeFree(40, ptr);
}

void myFree41(void* ptr) {
    nlp::invokeFree(41, ptr);
}
void myFree42(void* ptr) {
    nlp::invokeFree(42, ptr);
}
void myFree43(void* ptr) {
    nlp::invokeFree(43, ptr);
}
void myFree44(void* ptr) {
    nlp::invokeFree(44, ptr);
}
void myFree45(void* ptr) {
    nlp::invokeFree(45, ptr);
}
void myFree46(void* ptr) {
    nlp::invokeFree(46, ptr);
}
void myFree47(void* ptr) {
    nlp::invokeFree(47, ptr);
}
void myFree48(void* ptr) {
    nlp::invokeFree(48, ptr);
}
void myFree49(void* ptr) {
    nlp::invokeFree(49, ptr);
}
void myFree50(void* ptr) {
    nlp::invokeFree(50, ptr);
}

void myFree51(void* ptr) {
    nlp::invokeFree(51, ptr);
}
void myFree52(void* ptr) {
    nlp::invokeFree(52, ptr);
}
void myFree53(void* ptr) {
    nlp::invokeFree(53, ptr);
}
void myFree54(void* ptr) {
    nlp::invokeFree(54, ptr);
}
void myFree55(void* ptr) {
    nlp::invokeFree(55, ptr);
}
void myFree56(void* ptr) {
    nlp::invokeFree(56, ptr);
}
void myFree57(void* ptr) {
    nlp::invokeFree(57, ptr);
}
void myFree58(void* ptr) {
    nlp::invokeFree(58, ptr);
}
void myFree59(void* ptr) {
    nlp::invokeFree(59, ptr);
}
void myFree60(void* ptr) {
    nlp::invokeFree(60, ptr);
}

void myFree61(void* ptr) {
    nlp::invokeFree(61, ptr);
}
void myFree62(void* ptr) {
    nlp::invokeFree(62, ptr);
}
void myFree63(void* ptr) {
    nlp::invokeFree(63, ptr);
}
void myFree64(void* ptr) {
    nlp::invokeFree(64, ptr);
}
void myFree65(void* ptr) {
    nlp::invokeFree(65, ptr);
}
void myFree66(void* ptr) {
    nlp::invokeFree(66, ptr);
}
void myFree67(void* ptr) {
    nlp::invokeFree(67, ptr);
}
void myFree68(void* ptr) {
    nlp::invokeFree(68, ptr);
}
void myFree69(void* ptr) {
    nlp::invokeFree(69, ptr);
}
void myFree70(void* ptr) {
    nlp::invokeFree(70, ptr);
}

void myFree71(void* ptr) {
    nlp::invokeFree(71, ptr);
}
void myFree72(void* ptr) {
    nlp::invokeFree(72, ptr);
}
void myFree73(void* ptr) {
    nlp::invokeFree(73, ptr);
}
void myFree74(void* ptr) {
    nlp::invokeFree(74, ptr);
}
void myFree75(void* ptr) {
    nlp::invokeFree(75, ptr);
}
void myFree76(void* ptr) {
    nlp::invokeFree(76, ptr);
}
void myFree77(void* ptr) {
    nlp::invokeFree(77, ptr);
}
void myFree78(void* ptr) {
    nlp::invokeFree(78, ptr);
}
void myFree79(void* ptr) {
    nlp::invokeFree(79, ptr);
}
void myFree80(void* ptr) {
    nlp::invokeFree(80, ptr);
}

void myFree81(void* ptr) {
    nlp::invokeFree(81, ptr);
}
void myFree82(void* ptr) {
    nlp::invokeFree(82, ptr);
}
void myFree83(void* ptr) {
    nlp::invokeFree(83, ptr);
}
void myFree84(void* ptr) {
    nlp::invokeFree(84, ptr);
}
void myFree85(void* ptr) {
    nlp::invokeFree(85, ptr);
}
void myFree86(void* ptr) {
    nlp::invokeFree(86, ptr);
}
void myFree87(void* ptr) {
    nlp::invokeFree(87, ptr);
}
void myFree88(void* ptr) {
    nlp::invokeFree(88, ptr);
}
void myFree89(void* ptr) {
    nlp::invokeFree(89, ptr);
}
void myFree90(void* ptr) {
    nlp::invokeFree(90, ptr);
}

void myFree91(void* ptr) {
    nlp::invokeFree(91, ptr);
}
void myFree92(void* ptr) {
    nlp::invokeFree(92, ptr);
}
void myFree93(void* ptr) {
    nlp::invokeFree(93, ptr);
}
void myFree94(void* ptr) {
    nlp::invokeFree(94, ptr);
}
void myFree95(void* ptr) {
    nlp::invokeFree(95, ptr);
}
void myFree96(void* ptr) {
    nlp::invokeFree(96, ptr);
}
void myFree97(void* ptr) {
    nlp::invokeFree(97, ptr);
}
void myFree98(void* ptr) {
    nlp::invokeFree(98, ptr);
}
void myFree99(void* ptr) {
    nlp::invokeFree(99, ptr);
}
void myFree100(void* ptr) {
    nlp::invokeFree(100, ptr);
}

void myFree101(void* ptr) {
    nlp::invokeFree(101, ptr);
}
void myFree102(void* ptr) {
    nlp::invokeFree(102, ptr);
}
void myFree103(void* ptr) {
    nlp::invokeFree(103, ptr);
}
void myFree104(void* ptr) {
    nlp::invokeFree(104, ptr);
}
void myFree105(void* ptr) {
    nlp::invokeFree(105, ptr);
}
void myFree106(void* ptr) {
    nlp::invokeFree(106, ptr);
}
void myFree107(void* ptr) {
    nlp::invokeFree(107, ptr);
}
void myFree108(void* ptr) {
    nlp::invokeFree(108, ptr);
}
void myFree109(void* ptr) {
    nlp::invokeFree(109, ptr);
}
void myFree110(void* ptr) {
    nlp::invokeFree(110, ptr);
}

void myFree111(void* ptr) {
    nlp::invokeFree(111, ptr);
}
void myFree112(void* ptr) {
    nlp::invokeFree(112, ptr);
}
void myFree113(void* ptr) {
    nlp::invokeFree(113, ptr);
}
void myFree114(void* ptr) {
    nlp::invokeFree(114, ptr);
}
void myFree115(void* ptr) {
    nlp::invokeFree(115, ptr);
}
void myFree116(void* ptr) {
    nlp::invokeFree(116, ptr);
}
void myFree117(void* ptr) {
    nlp::invokeFree(117, ptr);
}
void myFree118(void* ptr) {
    nlp::invokeFree(118, ptr);
}
void myFree119(void* ptr) {
    nlp::invokeFree(119, ptr);
}
void myFree120(void* ptr) {
    nlp::invokeFree(120, ptr);
}

void myFree121(void* ptr) {
    nlp::invokeFree(121, ptr);
}
void myFree122(void* ptr) {
    nlp::invokeFree(122, ptr);
}
void myFree123(void* ptr) {
    nlp::invokeFree(123, ptr);
}
void myFree124(void* ptr) {
    nlp::invokeFree(124, ptr);
}
void myFree125(void* ptr) {
    nlp::invokeFree(125, ptr);
}
void myFree126(void* ptr) {
    nlp::invokeFree(126, ptr);
}
void myFree127(void* ptr) {
    nlp::invokeFree(127, ptr);
}
void myFree128(void* ptr) {
    nlp::invokeFree(128, ptr);
}
void myFree129(void* ptr) {
    nlp::invokeFree(129, ptr);
}
void myFree130(void* ptr) {
    nlp::invokeFree(130, ptr);
}

void myFree131(void* ptr) {
    nlp::invokeFree(131, ptr);
}
void myFree132(void* ptr) {
    nlp::invokeFree(132, ptr);
}
void myFree133(void* ptr) {
    nlp::invokeFree(133, ptr);
}
void myFree134(void* ptr) {
    nlp::invokeFree(134, ptr);
}
void myFree135(void* ptr) {
    nlp::invokeFree(135, ptr);
}
void myFree136(void* ptr) {
    nlp::invokeFree(136, ptr);
}
void myFree137(void* ptr) {
    nlp::invokeFree(137, ptr);
}
void myFree138(void* ptr) {
    nlp::invokeFree(138, ptr);
}
void myFree139(void* ptr) {
    nlp::invokeFree(139, ptr);
}
void myFree140(void* ptr) {
    nlp::invokeFree(140, ptr);
}

void myFree141(void* ptr) {
    nlp::invokeFree(141, ptr);
}
void myFree142(void* ptr) {
    nlp::invokeFree(142, ptr);
}
void myFree143(void* ptr) {
    nlp::invokeFree(143, ptr);
}
void myFree144(void* ptr) {
    nlp::invokeFree(144, ptr);
}
void myFree145(void* ptr) {
    nlp::invokeFree(145, ptr);
}
void myFree146(void* ptr) {
    nlp::invokeFree(146, ptr);
}
void myFree147(void* ptr) {
    nlp::invokeFree(147, ptr);
}
void myFree148(void* ptr) {
    nlp::invokeFree(148, ptr);
}
void myFree149(void* ptr) {
    nlp::invokeFree(149, ptr);
}

void myFree150(void* ptr) {nlp::invokeFree(150, ptr);}
void myFree151(void* ptr) {nlp::invokeFree(151, ptr);}
void myFree152(void* ptr) {nlp::invokeFree(152, ptr);}
void myFree153(void* ptr) {nlp::invokeFree(153, ptr);}
void myFree154(void* ptr) {nlp::invokeFree(154, ptr);}
void myFree155(void* ptr) {nlp::invokeFree(155, ptr);}
void myFree156(void* ptr) {nlp::invokeFree(156, ptr);}
void myFree157(void* ptr) {nlp::invokeFree(157, ptr);}
void myFree158(void* ptr) {nlp::invokeFree(158, ptr);}
void myFree159(void* ptr) {nlp::invokeFree(159, ptr);}

void myFree160(void* ptr) {nlp::invokeFree(160, ptr);}
void myFree161(void* ptr) {nlp::invokeFree(161, ptr);}
void myFree162(void* ptr) {nlp::invokeFree(162, ptr);}
void myFree163(void* ptr) {nlp::invokeFree(163, ptr);}
void myFree164(void* ptr) {nlp::invokeFree(164, ptr);}
void myFree165(void* ptr) {nlp::invokeFree(165, ptr);}
void myFree166(void* ptr) {nlp::invokeFree(166, ptr);}
void myFree167(void* ptr) {nlp::invokeFree(167, ptr);}
void myFree168(void* ptr) {nlp::invokeFree(168, ptr);}
void myFree169(void* ptr) {nlp::invokeFree(169, ptr);}

void myFree170(void* ptr) {nlp::invokeFree(170, ptr);}
void myFree171(void* ptr) {nlp::invokeFree(171, ptr);}
void myFree172(void* ptr) {nlp::invokeFree(172, ptr);}
void myFree173(void* ptr) {nlp::invokeFree(173, ptr);}
void myFree174(void* ptr) {nlp::invokeFree(174, ptr);}
void myFree175(void* ptr) {nlp::invokeFree(175, ptr);}
void myFree176(void* ptr) {nlp::invokeFree(176, ptr);}
void myFree177(void* ptr) {nlp::invokeFree(177, ptr);}
void myFree178(void* ptr) {nlp::invokeFree(178, ptr);}
void myFree179(void* ptr) {nlp::invokeFree(179, ptr);}

void myFree180(void* ptr) {nlp::invokeFree(180, ptr);}
void myFree181(void* ptr) {nlp::invokeFree(181, ptr);}
void myFree182(void* ptr) {nlp::invokeFree(182, ptr);}
void myFree183(void* ptr) {nlp::invokeFree(183, ptr);}
void myFree184(void* ptr) {nlp::invokeFree(184, ptr);}
void myFree185(void* ptr) {nlp::invokeFree(185, ptr);}
void myFree186(void* ptr) {nlp::invokeFree(186, ptr);}
void myFree187(void* ptr) {nlp::invokeFree(187, ptr);}
void myFree188(void* ptr) {nlp::invokeFree(188, ptr);}
void myFree189(void* ptr) {nlp::invokeFree(189, ptr);}

void myFree190(void* ptr) {nlp::invokeFree(190, ptr);}
void myFree191(void* ptr) {nlp::invokeFree(191, ptr);}
void myFree192(void* ptr) {nlp::invokeFree(192, ptr);}
void myFree193(void* ptr) {nlp::invokeFree(193, ptr);}
void myFree194(void* ptr) {nlp::invokeFree(194, ptr);}
void myFree195(void* ptr) {nlp::invokeFree(195, ptr);}
void myFree196(void* ptr) {nlp::invokeFree(196, ptr);}
void myFree197(void* ptr) {nlp::invokeFree(197, ptr);}
void myFree198(void* ptr) {nlp::invokeFree(198, ptr);}
void myFree199(void* ptr) {nlp::invokeFree(199, ptr);}

void myFree200(void* ptr) {nlp::invokeFree(200, ptr);}
void myFree201(void* ptr) {nlp::invokeFree(201, ptr);}
void myFree202(void* ptr) {nlp::invokeFree(202, ptr);}
void myFree203(void* ptr) {nlp::invokeFree(203, ptr);}
void myFree204(void* ptr) {nlp::invokeFree(204, ptr);}
void myFree205(void* ptr) {nlp::invokeFree(205, ptr);}
void myFree206(void* ptr) {nlp::invokeFree(206, ptr);}
void myFree207(void* ptr) {nlp::invokeFree(207, ptr);}
void myFree208(void* ptr) {nlp::invokeFree(208, ptr);}
void myFree209(void* ptr) {nlp::invokeFree(209, ptr);}

void myFree210(void* ptr) {nlp::invokeFree(210, ptr);}
void myFree211(void* ptr) {nlp::invokeFree(211, ptr);}
void myFree212(void* ptr) {nlp::invokeFree(212, ptr);}
void myFree213(void* ptr) {nlp::invokeFree(213, ptr);}
void myFree214(void* ptr) {nlp::invokeFree(214, ptr);}
void myFree215(void* ptr) {nlp::invokeFree(215, ptr);}
void myFree216(void* ptr) {nlp::invokeFree(216, ptr);}
void myFree217(void* ptr) {nlp::invokeFree(217, ptr);}
void myFree218(void* ptr) {nlp::invokeFree(218, ptr);}
void myFree219(void* ptr) {nlp::invokeFree(219, ptr);}

void myFree220(void* ptr) {nlp::invokeFree(220, ptr);}
void myFree221(void* ptr) {nlp::invokeFree(221, ptr);}
void myFree222(void* ptr) {nlp::invokeFree(222, ptr);}
void myFree223(void* ptr) {nlp::invokeFree(223, ptr);}
void myFree224(void* ptr) {nlp::invokeFree(224, ptr);}
void myFree225(void* ptr) {nlp::invokeFree(225, ptr);}
void myFree226(void* ptr) {nlp::invokeFree(226, ptr);}
void myFree227(void* ptr) {nlp::invokeFree(227, ptr);}
void myFree228(void* ptr) {nlp::invokeFree(228, ptr);}
void myFree229(void* ptr) {nlp::invokeFree(229, ptr);}

void myFree230(void* ptr) {nlp::invokeFree(230, ptr);}
void myFree231(void* ptr) {nlp::invokeFree(231, ptr);}
void myFree232(void* ptr) {nlp::invokeFree(232, ptr);}
void myFree233(void* ptr) {nlp::invokeFree(233, ptr);}
void myFree234(void* ptr) {nlp::invokeFree(234, ptr);}
void myFree235(void* ptr) {nlp::invokeFree(235, ptr);}
void myFree236(void* ptr) {nlp::invokeFree(236, ptr);}
void myFree237(void* ptr) {nlp::invokeFree(237, ptr);}
void myFree238(void* ptr) {nlp::invokeFree(238, ptr);}
void myFree239(void* ptr) {nlp::invokeFree(239, ptr);}

void myFree240(void* ptr) {nlp::invokeFree(240, ptr);}
void myFree241(void* ptr) {nlp::invokeFree(241, ptr);}
void myFree242(void* ptr) {nlp::invokeFree(242, ptr);}
void myFree243(void* ptr) {nlp::invokeFree(243, ptr);}
void myFree244(void* ptr) {nlp::invokeFree(244, ptr);}
void myFree245(void* ptr) {nlp::invokeFree(245, ptr);}
void myFree246(void* ptr) {nlp::invokeFree(246, ptr);}
void myFree247(void* ptr) {nlp::invokeFree(247, ptr);}
void myFree248(void* ptr) {nlp::invokeFree(248, ptr);}
void myFree249(void* ptr) {nlp::invokeFree(249, ptr);}

void myFree250(void* ptr) {nlp::invokeFree(250, ptr);}
void myFree251(void* ptr) {nlp::invokeFree(251, ptr);}
void myFree252(void* ptr) {nlp::invokeFree(252, ptr);}
void myFree253(void* ptr) {nlp::invokeFree(253, ptr);}
void myFree254(void* ptr) {nlp::invokeFree(254, ptr);}
void myFree255(void* ptr) {nlp::invokeFree(255, ptr);}
void myFree256(void* ptr) {nlp::invokeFree(256, ptr);}
void myFree257(void* ptr) {nlp::invokeFree(257, ptr);}
void myFree258(void* ptr) {nlp::invokeFree(258, ptr);}
void myFree259(void* ptr) {nlp::invokeFree(259, ptr);}

void myFree260(void* ptr) {nlp::invokeFree(260, ptr);}
void myFree261(void* ptr) {nlp::invokeFree(261, ptr);}
void myFree262(void* ptr) {nlp::invokeFree(262, ptr);}
void myFree263(void* ptr) {nlp::invokeFree(263, ptr);}
void myFree264(void* ptr) {nlp::invokeFree(264, ptr);}
void myFree265(void* ptr) {nlp::invokeFree(265, ptr);}
void myFree266(void* ptr) {nlp::invokeFree(266, ptr);}
void myFree267(void* ptr) {nlp::invokeFree(267, ptr);}
void myFree268(void* ptr) {nlp::invokeFree(268, ptr);}
void myFree269(void* ptr) {nlp::invokeFree(269, ptr);}

void myFree270(void* ptr) {nlp::invokeFree(270, ptr);}
void myFree271(void* ptr) {nlp::invokeFree(271, ptr);}
void myFree272(void* ptr) {nlp::invokeFree(272, ptr);}
void myFree273(void* ptr) {nlp::invokeFree(273, ptr);}
void myFree274(void* ptr) {nlp::invokeFree(274, ptr);}
void myFree275(void* ptr) {nlp::invokeFree(275, ptr);}
void myFree276(void* ptr) {nlp::invokeFree(276, ptr);}
void myFree277(void* ptr) {nlp::invokeFree(277, ptr);}
void myFree278(void* ptr) {nlp::invokeFree(278, ptr);}
void myFree279(void* ptr) {nlp::invokeFree(279, ptr);}

void myFree280(void* ptr) {nlp::invokeFree(280, ptr);}
void myFree281(void* ptr) {nlp::invokeFree(281, ptr);}
void myFree282(void* ptr) {nlp::invokeFree(282, ptr);}
void myFree283(void* ptr) {nlp::invokeFree(283, ptr);}
void myFree284(void* ptr) {nlp::invokeFree(284, ptr);}
void myFree285(void* ptr) {nlp::invokeFree(285, ptr);}
void myFree286(void* ptr) {nlp::invokeFree(286, ptr);}
void myFree287(void* ptr) {nlp::invokeFree(287, ptr);}
void myFree288(void* ptr) {nlp::invokeFree(288, ptr);}
void myFree289(void* ptr) {nlp::invokeFree(289, ptr);}

void myFree290(void* ptr) {nlp::invokeFree(290, ptr);}
void myFree291(void* ptr) {nlp::invokeFree(291, ptr);}
void myFree292(void* ptr) {nlp::invokeFree(292, ptr);}
void myFree293(void* ptr) {nlp::invokeFree(293, ptr);}
void myFree294(void* ptr) {nlp::invokeFree(294, ptr);}
void myFree295(void* ptr) {nlp::invokeFree(295, ptr);}
void myFree296(void* ptr) {nlp::invokeFree(296, ptr);}
void myFree297(void* ptr) {nlp::invokeFree(297, ptr);}
void myFree298(void* ptr) {nlp::invokeFree(298, ptr);}
void myFree299(void* ptr) {nlp::invokeFree(299, ptr);}

void* popFreeMethod() {
    void *method = (void*) freeStk.front();
    freeStk.pop();
    return method;
}

void initDiyFreeMethod() {
    freeStk.push((void *) myFree1);
    freeStk.push((void *) myFree0);
    freeStk.push((void *) myFree2);
    freeStk.push((void *) myFree3);
    freeStk.push((void *) myFree4);
    freeStk.push((void *) myFree5);
    freeStk.push((void *) myFree6);
    freeStk.push((void *) myFree7);
    freeStk.push((void *) myFree8);
    freeStk.push((void *) myFree9);
    freeStk.push((void *) myFree10);

    freeStk.push((void *) myFree11);
    freeStk.push((void *) myFree12);
    freeStk.push((void *) myFree13);
    freeStk.push((void *) myFree14);
    freeStk.push((void *) myFree15);
    freeStk.push((void *) myFree16);
    freeStk.push((void *) myFree17);
    freeStk.push((void *) myFree18);
    freeStk.push((void *) myFree19);
    freeStk.push((void *) myFree20);

    freeStk.push((void *) myFree21);
    freeStk.push((void *) myFree22);
    freeStk.push((void *) myFree23);
    freeStk.push((void *) myFree24);
    freeStk.push((void *) myFree25);
    freeStk.push((void *) myFree26);
    freeStk.push((void *) myFree27);
    freeStk.push((void *) myFree28);
    freeStk.push((void *) myFree29);
    freeStk.push((void *) myFree30);

    freeStk.push((void *) myFree31);
    freeStk.push((void *) myFree32);
    freeStk.push((void *) myFree33);
    freeStk.push((void *) myFree34);
    freeStk.push((void *) myFree35);
    freeStk.push((void *) myFree36);
    freeStk.push((void *) myFree37);
    freeStk.push((void *) myFree38);
    freeStk.push((void *) myFree39);
    freeStk.push((void *) myFree40);

    freeStk.push((void *) myFree41);
    freeStk.push((void *) myFree42);
    freeStk.push((void *) myFree43);
    freeStk.push((void *) myFree44);
    freeStk.push((void *) myFree45);
    freeStk.push((void *) myFree46);
    freeStk.push((void *) myFree47);
    freeStk.push((void *) myFree48);
    freeStk.push((void *) myFree49);
    freeStk.push((void *) myFree50);

    freeStk.push((void *) myFree51);
    freeStk.push((void *) myFree52);
    freeStk.push((void *) myFree53);
    freeStk.push((void *) myFree54);
    freeStk.push((void *) myFree55);
    freeStk.push((void *) myFree56);
    freeStk.push((void *) myFree57);
    freeStk.push((void *) myFree58);
    freeStk.push((void *) myFree59);
    freeStk.push((void *) myFree60);

    freeStk.push((void *) myFree61);
    freeStk.push((void *) myFree62);
    freeStk.push((void *) myFree63);
    freeStk.push((void *) myFree64);
    freeStk.push((void *) myFree65);
    freeStk.push((void *) myFree66);
    freeStk.push((void *) myFree67);
    freeStk.push((void *) myFree68);
    freeStk.push((void *) myFree69);
    freeStk.push((void *) myFree70);

    freeStk.push((void *) myFree71);
    freeStk.push((void *) myFree72);
    freeStk.push((void *) myFree73);
    freeStk.push((void *) myFree74);
    freeStk.push((void *) myFree75);
    freeStk.push((void *) myFree76);
    freeStk.push((void *) myFree77);
    freeStk.push((void *) myFree78);
    freeStk.push((void *) myFree79);
    freeStk.push((void *) myFree80);

    freeStk.push((void *) myFree81);
    freeStk.push((void *) myFree82);
    freeStk.push((void *) myFree83);
    freeStk.push((void *) myFree84);
    freeStk.push((void *) myFree85);
    freeStk.push((void *) myFree86);
    freeStk.push((void *) myFree87);
    freeStk.push((void *) myFree88);
    freeStk.push((void *) myFree89);
    freeStk.push((void *) myFree90);

    freeStk.push((void *) myFree91);
    freeStk.push((void *) myFree92);
    freeStk.push((void *) myFree93);
    freeStk.push((void *) myFree94);
    freeStk.push((void *) myFree95);
    freeStk.push((void *) myFree96);
    freeStk.push((void *) myFree97);
    freeStk.push((void *) myFree98);
    freeStk.push((void *) myFree99);
    freeStk.push((void *) myFree100);

    freeStk.push((void *) myFree101);
    freeStk.push((void *) myFree102);
    freeStk.push((void *) myFree103);
    freeStk.push((void *) myFree104);
    freeStk.push((void *) myFree105);
    freeStk.push((void *) myFree106);
    freeStk.push((void *) myFree107);
    freeStk.push((void *) myFree108);
    freeStk.push((void *) myFree109);
    freeStk.push((void *) myFree110);

    freeStk.push((void *) myFree111);
    freeStk.push((void *) myFree112);
    freeStk.push((void *) myFree113);
    freeStk.push((void *) myFree114);
    freeStk.push((void *) myFree115);
    freeStk.push((void *) myFree116);
    freeStk.push((void *) myFree117);
    freeStk.push((void *) myFree118);
    freeStk.push((void *) myFree119);
    freeStk.push((void *) myFree120);

    freeStk.push((void *) myFree121);
    freeStk.push((void *) myFree122);
    freeStk.push((void *) myFree123);
    freeStk.push((void *) myFree124);
    freeStk.push((void *) myFree125);
    freeStk.push((void *) myFree126);
    freeStk.push((void *) myFree127);
    freeStk.push((void *) myFree128);
    freeStk.push((void *) myFree129);
    freeStk.push((void *) myFree130);

    freeStk.push((void *) myFree131);
    freeStk.push((void *) myFree132);
    freeStk.push((void *) myFree133);
    freeStk.push((void *) myFree134);
    freeStk.push((void *) myFree135);
    freeStk.push((void *) myFree136);
    freeStk.push((void *) myFree137);
    freeStk.push((void *) myFree138);
    freeStk.push((void *) myFree139);
    freeStk.push((void *) myFree140);

    freeStk.push((void *) myFree141);
    freeStk.push((void *) myFree142);
    freeStk.push((void *) myFree143);
    freeStk.push((void *) myFree144);
    freeStk.push((void *) myFree145);
    freeStk.push((void *) myFree146);
    freeStk.push((void *) myFree147);
    freeStk.push((void *) myFree148);
    freeStk.push((void *) myFree149);
    freeStk.push((void *) myFree150);

    freeStk.push((void *) myFree151);
    freeStk.push((void *) myFree152);
    freeStk.push((void *) myFree153);
    freeStk.push((void *) myFree154);
    freeStk.push((void *) myFree155);
    freeStk.push((void *) myFree156);
    freeStk.push((void *) myFree157);
    freeStk.push((void *) myFree158);
    freeStk.push((void *) myFree159);

    freeStk.push((void *) myFree160);
    freeStk.push((void *) myFree161);
    freeStk.push((void *) myFree162);
    freeStk.push((void *) myFree163);
    freeStk.push((void *) myFree164);
    freeStk.push((void *) myFree165);
    freeStk.push((void *) myFree166);
    freeStk.push((void *) myFree167);
    freeStk.push((void *) myFree168);
    freeStk.push((void *) myFree169);

    freeStk.push((void *) myFree170);
    freeStk.push((void *) myFree171);
    freeStk.push((void *) myFree172);
    freeStk.push((void *) myFree173);
    freeStk.push((void *) myFree174);
    freeStk.push((void *) myFree175);
    freeStk.push((void *) myFree176);
    freeStk.push((void *) myFree177);
    freeStk.push((void *) myFree178);
    freeStk.push((void *) myFree179);

    freeStk.push((void *) myFree180);
    freeStk.push((void *) myFree181);
    freeStk.push((void *) myFree182);
    freeStk.push((void *) myFree183);
    freeStk.push((void *) myFree184);
    freeStk.push((void *) myFree185);
    freeStk.push((void *) myFree186);
    freeStk.push((void *) myFree187);
    freeStk.push((void *) myFree188);
    freeStk.push((void *) myFree189);

    freeStk.push((void *) myFree190);
    freeStk.push((void *) myFree191);
    freeStk.push((void *) myFree192);
    freeStk.push((void *) myFree193);
    freeStk.push((void *) myFree194);
    freeStk.push((void *) myFree195);
    freeStk.push((void *) myFree196);
    freeStk.push((void *) myFree197);
    freeStk.push((void *) myFree198);
    freeStk.push((void *) myFree199);

    freeStk.push((void *) myFree200);
    freeStk.push((void *) myFree201);
    freeStk.push((void *) myFree202);
    freeStk.push((void *) myFree203);
    freeStk.push((void *) myFree204);
    freeStk.push((void *) myFree205);
    freeStk.push((void *) myFree206);
    freeStk.push((void *) myFree207);
    freeStk.push((void *) myFree208);
    freeStk.push((void *) myFree209);

    freeStk.push((void *) myFree210);
    freeStk.push((void *) myFree211);
    freeStk.push((void *) myFree212);
    freeStk.push((void *) myFree213);
    freeStk.push((void *) myFree214);
    freeStk.push((void *) myFree215);
    freeStk.push((void *) myFree216);
    freeStk.push((void *) myFree217);
    freeStk.push((void *) myFree218);
    freeStk.push((void *) myFree219);

    freeStk.push((void *) myFree220);
    freeStk.push((void *) myFree221);
    freeStk.push((void *) myFree222);
    freeStk.push((void *) myFree223);
    freeStk.push((void *) myFree224);
    freeStk.push((void *) myFree225);
    freeStk.push((void *) myFree226);
    freeStk.push((void *) myFree227);
    freeStk.push((void *) myFree228);
    freeStk.push((void *) myFree229);

    freeStk.push((void *) myFree230);
    freeStk.push((void *) myFree231);
    freeStk.push((void *) myFree232);
    freeStk.push((void *) myFree233);
    freeStk.push((void *) myFree234);
    freeStk.push((void *) myFree235);
    freeStk.push((void *) myFree236);
    freeStk.push((void *) myFree237);
    freeStk.push((void *) myFree238);
    freeStk.push((void *) myFree239);

    freeStk.push((void *) myFree240);
    freeStk.push((void *) myFree241);
    freeStk.push((void *) myFree242);
    freeStk.push((void *) myFree243);
    freeStk.push((void *) myFree244);
    freeStk.push((void *) myFree245);
    freeStk.push((void *) myFree246);
    freeStk.push((void *) myFree247);
    freeStk.push((void *) myFree248);
    freeStk.push((void *) myFree249);

    freeStk.push((void *) myFree250);
    freeStk.push((void *) myFree251);
    freeStk.push((void *) myFree252);
    freeStk.push((void *) myFree253);
    freeStk.push((void *) myFree254);
    freeStk.push((void *) myFree255);
    freeStk.push((void *) myFree256);
    freeStk.push((void *) myFree257);
    freeStk.push((void *) myFree258);
    freeStk.push((void *) myFree259);

    freeStk.push((void *) myFree260);
    freeStk.push((void *) myFree261);
    freeStk.push((void *) myFree262);
    freeStk.push((void *) myFree263);
    freeStk.push((void *) myFree264);
    freeStk.push((void *) myFree265);
    freeStk.push((void *) myFree266);
    freeStk.push((void *) myFree267);
    freeStk.push((void *) myFree268);
    freeStk.push((void *) myFree269);

    freeStk.push((void *) myFree270);
    freeStk.push((void *) myFree271);
    freeStk.push((void *) myFree272);
    freeStk.push((void *) myFree273);
    freeStk.push((void *) myFree274);
    freeStk.push((void *) myFree275);
    freeStk.push((void *) myFree276);
    freeStk.push((void *) myFree277);
    freeStk.push((void *) myFree278);
    freeStk.push((void *) myFree279);

    freeStk.push((void *) myFree280);
    freeStk.push((void *) myFree281);
    freeStk.push((void *) myFree282);
    freeStk.push((void *) myFree283);
    freeStk.push((void *) myFree284);
    freeStk.push((void *) myFree285);
    freeStk.push((void *) myFree286);
    freeStk.push((void *) myFree287);
    freeStk.push((void *) myFree288);
    freeStk.push((void *) myFree289);

    freeStk.push((void *) myFree290);
    freeStk.push((void *) myFree291);
    freeStk.push((void *) myFree292);
    freeStk.push((void *) myFree293);
    freeStk.push((void *) myFree294);
    freeStk.push((void *) myFree295);
    freeStk.push((void *) myFree296);
    freeStk.push((void *) myFree297);
    freeStk.push((void *) myFree298);
    freeStk.push((void *) myFree299);
}
