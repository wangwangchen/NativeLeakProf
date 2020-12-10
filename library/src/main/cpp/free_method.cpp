//
// Created by chenwangwang on 2020/12/10.
//

#include "free_method.h"
#include "Log.h"
#include "memory_manager.h"

std::stack<void*> freeStk;

void myFree1(void* ptr) {
    return nlp::invokeFree((void *) myFree1, ptr);
}
void myFree2(void* ptr) {
    return nlp::invokeFree((void *) myFree2, ptr);
}
void myFree3(void* ptr) {
    return nlp::invokeFree((void *) myFree3, ptr);
}
void myFree4(void* ptr) {
    return nlp::invokeFree((void *) myFree4, ptr);
}
void myFree5(void* ptr) {
    return nlp::invokeFree((void *) myFree5, ptr);
}
void myFree6(void* ptr) {
    return nlp::invokeFree((void *) myFree6, ptr);
}
void myFree7(void* ptr) {
    return nlp::invokeFree((void *) myFree7, ptr);
}
void myFree8(void* ptr) {
    return nlp::invokeFree((void *) myFree8, ptr);
}
void myFree9(void* ptr) {
    return nlp::invokeFree((void *) myFree9, ptr);
}
void myFree10(void* ptr) {
    return nlp::invokeFree((void *) myFree10, ptr);
}

void myFree11(void* ptr) {
    return nlp::invokeFree((void *) myFree11, ptr);
}
void myFree12(void* ptr) {
    return nlp::invokeFree((void *) myFree12, ptr);
}
void myFree13(void* ptr) {
    return nlp::invokeFree((void *) myFree13, ptr);
}
void myFree14(void* ptr) {
    return nlp::invokeFree((void *) myFree14, ptr);
}
void myFree15(void* ptr) {
    return nlp::invokeFree((void *) myFree15, ptr);
}
void myFree16(void* ptr) {
    return nlp::invokeFree((void *) myFree16, ptr);
}
void myFree17(void* ptr) {
    return nlp::invokeFree((void *) myFree17, ptr);
}
void myFree18(void* ptr) {
    return nlp::invokeFree((void *) myFree18, ptr);
}
void myFree19(void* ptr) {
    return nlp::invokeFree((void *) myFree19, ptr);
}
void myFree20(void* ptr) {
    return nlp::invokeFree((void *) myFree20, ptr);
}

void myFree21(void* ptr) {
    return nlp::invokeFree((void *) myFree21, ptr);
}
void myFree22(void* ptr) {
    return nlp::invokeFree((void *) myFree22, ptr);
}
void myFree23(void* ptr) {
    return nlp::invokeFree((void *) myFree23, ptr);
}
void myFree24(void* ptr) {
    return nlp::invokeFree((void *) myFree24, ptr);
}
void myFree25(void* ptr) {
    return nlp::invokeFree((void *) myFree25, ptr);
}
void myFree26(void* ptr) {
    return nlp::invokeFree((void *) myFree26, ptr);
}
void myFree27(void* ptr) {
    return nlp::invokeFree((void *) myFree27, ptr);
}
void myFree28(void* ptr) {
    return nlp::invokeFree((void *) myFree28, ptr);
}
void myFree29(void* ptr) {
    return nlp::invokeFree((void *) myFree29, ptr);
}
void myFree30(void* ptr) {
    return nlp::invokeFree((void *) myFree30, ptr);
}

void myFree31(void* ptr) {
    return nlp::invokeFree((void *) myFree31, ptr);
}
void myFree32(void* ptr) {
    return nlp::invokeFree((void *) myFree32, ptr);
}
void myFree33(void* ptr) {
    return nlp::invokeFree((void *) myFree33, ptr);
}
void myFree34(void* ptr) {
    return nlp::invokeFree((void *) myFree34, ptr);
}
void myFree35(void* ptr) {
    return nlp::invokeFree((void *) myFree35, ptr);
}
void myFree36(void* ptr) {
    return nlp::invokeFree((void *) myFree36, ptr);
}
void myFree37(void* ptr) {
    return nlp::invokeFree((void *) myFree37, ptr);
}
void myFree38(void* ptr) {
    return nlp::invokeFree((void *) myFree38, ptr);
}
void myFree39(void* ptr) {
    return nlp::invokeFree((void *) myFree39, ptr);
}
void myFree40(void* ptr) {
    return nlp::invokeFree((void *) myFree40, ptr);
}

void myFree41(void* ptr) {
    return nlp::invokeFree((void *) myFree41, ptr);
}
void myFree42(void* ptr) {
    return nlp::invokeFree((void *) myFree42, ptr);
}
void myFree43(void* ptr) {
    return nlp::invokeFree((void *) myFree43, ptr);
}
void myFree44(void* ptr) {
    return nlp::invokeFree((void *) myFree44, ptr);
}
void myFree45(void* ptr) {
    return nlp::invokeFree((void *) myFree45, ptr);
}
void myFree46(void* ptr) {
    return nlp::invokeFree((void *) myFree46, ptr);
}
void myFree47(void* ptr) {
    return nlp::invokeFree((void *) myFree47, ptr);
}
void myFree48(void* ptr) {
    return nlp::invokeFree((void *) myFree48, ptr);
}
void myFree49(void* ptr) {
    return nlp::invokeFree((void *) myFree49, ptr);
}
void myFree50(void* ptr) {
    return nlp::invokeFree((void *) myFree50, ptr);
}

void myFree51(void* ptr) {
    return nlp::invokeFree((void *) myFree51, ptr);
}
void myFree52(void* ptr) {
    return nlp::invokeFree((void *) myFree52, ptr);
}
void myFree53(void* ptr) {
    return nlp::invokeFree((void *) myFree53, ptr);
}
void myFree54(void* ptr) {
    return nlp::invokeFree((void *) myFree54, ptr);
}
void myFree55(void* ptr) {
    return nlp::invokeFree((void *) myFree55, ptr);
}
void myFree56(void* ptr) {
    return nlp::invokeFree((void *) myFree56, ptr);
}
void myFree57(void* ptr) {
    return nlp::invokeFree((void *) myFree57, ptr);
}
void myFree58(void* ptr) {
    return nlp::invokeFree((void *) myFree58, ptr);
}
void myFree59(void* ptr) {
    return nlp::invokeFree((void *) myFree59, ptr);
}
void myFree60(void* ptr) {
    return nlp::invokeFree((void *) myFree60, ptr);
}

void myFree61(void* ptr) {
    return nlp::invokeFree((void *) myFree61, ptr);
}
void myFree62(void* ptr) {
    return nlp::invokeFree((void *) myFree62, ptr);
}
void myFree63(void* ptr) {
    return nlp::invokeFree((void *) myFree63, ptr);
}
void myFree64(void* ptr) {
    return nlp::invokeFree((void *) myFree64, ptr);
}
void myFree65(void* ptr) {
    return nlp::invokeFree((void *) myFree65, ptr);
}
void myFree66(void* ptr) {
    return nlp::invokeFree((void *) myFree66, ptr);
}
void myFree67(void* ptr) {
    return nlp::invokeFree((void *) myFree67, ptr);
}
void myFree68(void* ptr) {
    return nlp::invokeFree((void *) myFree68, ptr);
}
void myFree69(void* ptr) {
    return nlp::invokeFree((void *) myFree69, ptr);
}
void myFree70(void* ptr) {
    return nlp::invokeFree((void *) myFree70, ptr);
}

void myFree71(void* ptr) {
    return nlp::invokeFree((void *) myFree71, ptr);
}
void myFree72(void* ptr) {
    return nlp::invokeFree((void *) myFree72, ptr);
}
void myFree73(void* ptr) {
    return nlp::invokeFree((void *) myFree73, ptr);
}
void myFree74(void* ptr) {
    return nlp::invokeFree((void *) myFree74, ptr);
}
void myFree75(void* ptr) {
    return nlp::invokeFree((void *) myFree75, ptr);
}
void myFree76(void* ptr) {
    return nlp::invokeFree((void *) myFree76, ptr);
}
void myFree77(void* ptr) {
    return nlp::invokeFree((void *) myFree77, ptr);
}
void myFree78(void* ptr) {
    return nlp::invokeFree((void *) myFree78, ptr);
}
void myFree79(void* ptr) {
    return nlp::invokeFree((void *) myFree79, ptr);
}
void myFree80(void* ptr) {
    return nlp::invokeFree((void *) myFree80, ptr);
}

void myFree81(void* ptr) {
    return nlp::invokeFree((void *) myFree81, ptr);
}
void myFree82(void* ptr) {
    return nlp::invokeFree((void *) myFree82, ptr);
}
void myFree83(void* ptr) {
    return nlp::invokeFree((void *) myFree83, ptr);
}
void myFree84(void* ptr) {
    return nlp::invokeFree((void *) myFree84, ptr);
}
void myFree85(void* ptr) {
    return nlp::invokeFree((void *) myFree85, ptr);
}
void myFree86(void* ptr) {
    return nlp::invokeFree((void *) myFree86, ptr);
}
void myFree87(void* ptr) {
    return nlp::invokeFree((void *) myFree87, ptr);
}
void myFree88(void* ptr) {
    return nlp::invokeFree((void *) myFree88, ptr);
}
void myFree89(void* ptr) {
    return nlp::invokeFree((void *) myFree89, ptr);
}
void myFree90(void* ptr) {
    return nlp::invokeFree((void *) myFree90, ptr);
}

void myFree91(void* ptr) {
    return nlp::invokeFree((void *) myFree91, ptr);
}
void myFree92(void* ptr) {
    return nlp::invokeFree((void *) myFree92, ptr);
}
void myFree93(void* ptr) {
    return nlp::invokeFree((void *) myFree93, ptr);
}
void myFree94(void* ptr) {
    return nlp::invokeFree((void *) myFree94, ptr);
}
void myFree95(void* ptr) {
    return nlp::invokeFree((void *) myFree95, ptr);
}
void myFree96(void* ptr) {
    return nlp::invokeFree((void *) myFree96, ptr);
}
void myFree97(void* ptr) {
    return nlp::invokeFree((void *) myFree97, ptr);
}
void myFree98(void* ptr) {
    return nlp::invokeFree((void *) myFree98, ptr);
}
void myFree99(void* ptr) {
    return nlp::invokeFree((void *) myFree99, ptr);
}
void myFree100(void* ptr) {
    return nlp::invokeFree((void *) myFree100, ptr);
}

void myFree101(void* ptr) {
    return nlp::invokeFree((void *) myFree101, ptr);
}
void myFree102(void* ptr) {
    return nlp::invokeFree((void *) myFree102, ptr);
}
void myFree103(void* ptr) {
    return nlp::invokeFree((void *) myFree103, ptr);
}
void myFree104(void* ptr) {
    return nlp::invokeFree((void *) myFree104, ptr);
}
void myFree105(void* ptr) {
    return nlp::invokeFree((void *) myFree105, ptr);
}
void myFree106(void* ptr) {
    return nlp::invokeFree((void *) myFree106, ptr);
}
void myFree107(void* ptr) {
    return nlp::invokeFree((void *) myFree107, ptr);
}
void myFree108(void* ptr) {
    return nlp::invokeFree((void *) myFree108, ptr);
}
void myFree109(void* ptr) {
    return nlp::invokeFree((void *) myFree109, ptr);
}
void myFree110(void* ptr) {
    return nlp::invokeFree((void *) myFree110, ptr);
}

void myFree111(void* ptr) {
    return nlp::invokeFree((void *) myFree111, ptr);
}
void myFree112(void* ptr) {
    return nlp::invokeFree((void *) myFree112, ptr);
}
void myFree113(void* ptr) {
    return nlp::invokeFree((void *) myFree113, ptr);
}
void myFree114(void* ptr) {
    return nlp::invokeFree((void *) myFree114, ptr);
}
void myFree115(void* ptr) {
    return nlp::invokeFree((void *) myFree115, ptr);
}
void myFree116(void* ptr) {
    return nlp::invokeFree((void *) myFree116, ptr);
}
void myFree117(void* ptr) {
    return nlp::invokeFree((void *) myFree117, ptr);
}
void myFree118(void* ptr) {
    return nlp::invokeFree((void *) myFree118, ptr);
}
void myFree119(void* ptr) {
    return nlp::invokeFree((void *) myFree119, ptr);
}
void myFree120(void* ptr) {
    return nlp::invokeFree((void *) myFree120, ptr);
}

void myFree121(void* ptr) {
    return nlp::invokeFree((void *) myFree121, ptr);
}
void myFree122(void* ptr) {
    return nlp::invokeFree((void *) myFree122, ptr);
}
void myFree123(void* ptr) {
    return nlp::invokeFree((void *) myFree123, ptr);
}
void myFree124(void* ptr) {
    return nlp::invokeFree((void *) myFree124, ptr);
}
void myFree125(void* ptr) {
    return nlp::invokeFree((void *) myFree125, ptr);
}
void myFree126(void* ptr) {
    return nlp::invokeFree((void *) myFree126, ptr);
}
void myFree127(void* ptr) {
    return nlp::invokeFree((void *) myFree127, ptr);
}
void myFree128(void* ptr) {
    return nlp::invokeFree((void *) myFree128, ptr);
}
void myFree129(void* ptr) {
    return nlp::invokeFree((void *) myFree129, ptr);
}
void myFree130(void* ptr) {
    return nlp::invokeFree((void *) myFree130, ptr);
}

void myFree131(void* ptr) {
    return nlp::invokeFree((void *) myFree131, ptr);
}
void myFree132(void* ptr) {
    return nlp::invokeFree((void *) myFree132, ptr);
}
void myFree133(void* ptr) {
    return nlp::invokeFree((void *) myFree133, ptr);
}
void myFree134(void* ptr) {
    return nlp::invokeFree((void *) myFree134, ptr);
}
void myFree135(void* ptr) {
    return nlp::invokeFree((void *) myFree135, ptr);
}
void myFree136(void* ptr) {
    return nlp::invokeFree((void *) myFree136, ptr);
}
void myFree137(void* ptr) {
    return nlp::invokeFree((void *) myFree137, ptr);
}
void myFree138(void* ptr) {
    return nlp::invokeFree((void *) myFree138, ptr);
}
void myFree139(void* ptr) {
    return nlp::invokeFree((void *) myFree139, ptr);
}
void myFree140(void* ptr) {
    return nlp::invokeFree((void *) myFree140, ptr);
}

void myFree141(void* ptr) {
    return nlp::invokeFree((void *) myFree141, ptr);
}
void myFree142(void* ptr) {
    return nlp::invokeFree((void *) myFree142, ptr);
}
void myFree143(void* ptr) {
    return nlp::invokeFree((void *) myFree143, ptr);
}
void myFree144(void* ptr) {
    return nlp::invokeFree((void *) myFree144, ptr);
}
void myFree145(void* ptr) {
    return nlp::invokeFree((void *) myFree145, ptr);
}
void myFree146(void* ptr) {
    return nlp::invokeFree((void *) myFree146, ptr);
}
void myFree147(void* ptr) {
    return nlp::invokeFree((void *) myFree147, ptr);
}
void myFree148(void* ptr) {
    return nlp::invokeFree((void *) myFree148, ptr);
}
void myFree149(void* ptr) {
    return nlp::invokeFree((void *) myFree149, ptr);
}
void myFree150(void* ptr) {
    return nlp::invokeFree((void *) myFree150, ptr);
}

void* popFreeMethod(std::string &libName) {
    void *method = (void*) freeStk.top();
    freeStk.pop();
    return method;
}

void initDiyFreeMethod() {
    freeStk.push((void *) myFree1);
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
}
