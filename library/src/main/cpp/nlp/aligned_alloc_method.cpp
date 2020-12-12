//
// Created by chenwangwang on 2020/12/10.
//

#include "aligned_alloc_method.h"
#include "Log.h"
#include "memory_manager.h"

std::stack<void*> alignedAllocStk;
std::stack<void*> alignedAllocStkUsed;

void *MyAlignedAlloc1(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc1, alignment, byteCount);
}
void *MyAlignedAlloc2(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc2, alignment, byteCount);
}
void *MyAlignedAlloc3(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc3, alignment, byteCount);
}
void *MyAlignedAlloc4(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc4, alignment, byteCount);
}
void *MyAlignedAlloc5(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc5, alignment, byteCount);
}
void *MyAlignedAlloc6(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc6, alignment, byteCount);
}
void *MyAlignedAlloc7(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc7, alignment, byteCount);
}
void *MyAlignedAlloc8(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc8, alignment, byteCount);
}
void *MyAlignedAlloc9(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc9, alignment, byteCount);
}
void *MyAlignedAlloc10(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc10, alignment, byteCount);
}

void *MyAlignedAlloc11(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc11, alignment, byteCount);
}
void *MyAlignedAlloc12(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc12, alignment, byteCount);
}
void *MyAlignedAlloc13(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc13, alignment, byteCount);
}
void *MyAlignedAlloc14(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc14, alignment, byteCount);
}
void *MyAlignedAlloc15(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc15, alignment, byteCount);
}
void *MyAlignedAlloc16(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc16, alignment, byteCount);
}
void *MyAlignedAlloc17(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc17, alignment, byteCount);
}
void *MyAlignedAlloc18(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc18, alignment, byteCount);
}
void *MyAlignedAlloc19(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc19, alignment, byteCount);
}
void *MyAlignedAlloc20(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc20, alignment, byteCount);
}

void *MyAlignedAlloc21(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc21, alignment, byteCount);
}
void *MyAlignedAlloc22(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc22, alignment, byteCount);
}
void *MyAlignedAlloc23(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc23, alignment, byteCount);
}
void *MyAlignedAlloc24(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc24, alignment, byteCount);
}
void *MyAlignedAlloc25(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc25, alignment, byteCount);
}
void *MyAlignedAlloc26(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc26, alignment, byteCount);
}
void *MyAlignedAlloc27(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc27, alignment, byteCount);
}
void *MyAlignedAlloc28(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc28, alignment, byteCount);
}
void *MyAlignedAlloc29(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc29, alignment, byteCount);
}
void *MyAlignedAlloc30(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc30, alignment, byteCount);
}

void *MyAlignedAlloc31(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc31, alignment, byteCount);
}
void *MyAlignedAlloc32(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc32, alignment, byteCount);
}
void *MyAlignedAlloc33(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc33, alignment, byteCount);
}
void *MyAlignedAlloc34(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc34, alignment, byteCount);
}
void *MyAlignedAlloc35(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc35, alignment, byteCount);
}
void *MyAlignedAlloc36(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc36, alignment, byteCount);
}
void *MyAlignedAlloc37(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc37, alignment, byteCount);
}
void *MyAlignedAlloc38(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc38, alignment, byteCount);
}
void *MyAlignedAlloc39(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc39, alignment, byteCount);
}
void *MyAlignedAlloc40(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc40, alignment, byteCount);
}

void *MyAlignedAlloc41(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc41, alignment, byteCount);
}
void *MyAlignedAlloc42(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc42, alignment, byteCount);
}
void *MyAlignedAlloc43(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc43, alignment, byteCount);
}
void *MyAlignedAlloc44(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc44, alignment, byteCount);
}
void *MyAlignedAlloc45(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc45, alignment, byteCount);
}
void *MyAlignedAlloc46(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc46, alignment, byteCount);
}
void *MyAlignedAlloc47(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc47, alignment, byteCount);
}
void *MyAlignedAlloc48(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc48, alignment, byteCount);
}
void *MyAlignedAlloc49(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc49, alignment, byteCount);
}
void *MyAlignedAlloc50(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc50, alignment, byteCount);
}

void *MyAlignedAlloc51(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc51, alignment, byteCount);
}
void *MyAlignedAlloc52(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc52, alignment, byteCount);
}
void *MyAlignedAlloc53(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc53, alignment, byteCount);
}
void *MyAlignedAlloc54(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc54, alignment, byteCount);
}
void *MyAlignedAlloc55(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc55, alignment, byteCount);
}
void *MyAlignedAlloc56(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc56, alignment, byteCount);
}
void *MyAlignedAlloc57(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc57, alignment, byteCount);
}
void *MyAlignedAlloc58(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc58, alignment, byteCount);
}
void *MyAlignedAlloc59(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc59, alignment, byteCount);
}
void *MyAlignedAlloc60(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc60, alignment, byteCount);
}

void *MyAlignedAlloc61(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc61, alignment, byteCount);
}
void *MyAlignedAlloc62(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc62, alignment, byteCount);
}
void *MyAlignedAlloc63(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc63, alignment, byteCount);
}
void *MyAlignedAlloc64(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc64, alignment, byteCount);
}
void *MyAlignedAlloc65(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc65, alignment, byteCount);
}
void *MyAlignedAlloc66(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc66, alignment, byteCount);
}
void *MyAlignedAlloc67(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc67, alignment, byteCount);
}
void *MyAlignedAlloc68(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc68, alignment, byteCount);
}
void *MyAlignedAlloc69(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc69, alignment, byteCount);
}
void *MyAlignedAlloc70(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc70, alignment, byteCount);
}

void *MyAlignedAlloc71(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc71, alignment, byteCount);
}
void *MyAlignedAlloc72(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc72, alignment, byteCount);
}
void *MyAlignedAlloc73(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc73, alignment, byteCount);
}
void *MyAlignedAlloc74(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc74, alignment, byteCount);
}
void *MyAlignedAlloc75(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc75, alignment, byteCount);
}
void *MyAlignedAlloc76(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc76, alignment, byteCount);
}
void *MyAlignedAlloc77(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc77, alignment, byteCount);
}
void *MyAlignedAlloc78(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc78, alignment, byteCount);
}
void *MyAlignedAlloc79(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc79, alignment, byteCount);
}
void *MyAlignedAlloc80(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc80, alignment, byteCount);
}

void *MyAlignedAlloc81(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc81, alignment, byteCount);
}
void *MyAlignedAlloc82(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc82, alignment, byteCount);
}
void *MyAlignedAlloc83(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc83, alignment, byteCount);
}
void *MyAlignedAlloc84(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc84, alignment, byteCount);
}
void *MyAlignedAlloc85(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc85, alignment, byteCount);
}
void *MyAlignedAlloc86(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc86, alignment, byteCount);
}
void *MyAlignedAlloc87(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc87, alignment, byteCount);
}
void *MyAlignedAlloc88(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc88, alignment, byteCount);
}
void *MyAlignedAlloc89(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc89, alignment, byteCount);
}
void *MyAlignedAlloc90(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc90, alignment, byteCount);
}

void *MyAlignedAlloc91(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc91, alignment, byteCount);
}
void *MyAlignedAlloc92(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc92, alignment, byteCount);
}
void *MyAlignedAlloc93(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc93, alignment, byteCount);
}
void *MyAlignedAlloc94(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc94, alignment, byteCount);
}
void *MyAlignedAlloc95(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc95, alignment, byteCount);
}
void *MyAlignedAlloc96(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc96, alignment, byteCount);
}
void *MyAlignedAlloc97(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc97, alignment, byteCount);
}
void *MyAlignedAlloc98(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc98, alignment, byteCount);
}
void *MyAlignedAlloc99(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc99, alignment, byteCount);
}
void *MyAlignedAlloc100(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc100, alignment, byteCount);
}

void *MyAlignedAlloc101(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc101, alignment, byteCount);
}
void *MyAlignedAlloc102(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc102, alignment, byteCount);
}
void *MyAlignedAlloc103(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc103, alignment, byteCount);
}
void *MyAlignedAlloc104(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc104, alignment, byteCount);
}
void *MyAlignedAlloc105(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc105, alignment, byteCount);
}
void *MyAlignedAlloc106(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc106, alignment, byteCount);
}
void *MyAlignedAlloc107(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc107, alignment, byteCount);
}
void *MyAlignedAlloc108(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc108, alignment, byteCount);
}
void *MyAlignedAlloc109(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc109, alignment, byteCount);
}
void *MyAlignedAlloc110(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc110, alignment, byteCount);
}

void *MyAlignedAlloc111(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc111, alignment, byteCount);
}
void *MyAlignedAlloc112(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc112, alignment, byteCount);
}
void *MyAlignedAlloc113(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc113, alignment, byteCount);
}
void *MyAlignedAlloc114(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc114, alignment, byteCount);
}
void *MyAlignedAlloc115(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc115, alignment, byteCount);
}
void *MyAlignedAlloc116(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc116, alignment, byteCount);
}
void *MyAlignedAlloc117(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc117, alignment, byteCount);
}
void *MyAlignedAlloc118(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc118, alignment, byteCount);
}
void *MyAlignedAlloc119(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc119, alignment, byteCount);
}
void *MyAlignedAlloc120(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc120, alignment, byteCount);
}

void *MyAlignedAlloc121(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc121, alignment, byteCount);
}
void *MyAlignedAlloc122(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc122, alignment, byteCount);
}
void *MyAlignedAlloc123(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc123, alignment, byteCount);
}
void *MyAlignedAlloc124(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc124, alignment, byteCount);
}
void *MyAlignedAlloc125(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc125, alignment, byteCount);
}
void *MyAlignedAlloc126(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc126, alignment, byteCount);
}
void *MyAlignedAlloc127(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc127, alignment, byteCount);
}
void *MyAlignedAlloc128(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc128, alignment, byteCount);
}
void *MyAlignedAlloc129(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc129, alignment, byteCount);
}
void *MyAlignedAlloc130(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc130, alignment, byteCount);
}

void *MyAlignedAlloc131(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc131, alignment, byteCount);
}
void *MyAlignedAlloc132(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc132, alignment, byteCount);
}
void *MyAlignedAlloc133(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc133, alignment, byteCount);
}
void *MyAlignedAlloc134(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc134, alignment, byteCount);
}
void *MyAlignedAlloc135(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc135, alignment, byteCount);
}
void *MyAlignedAlloc136(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc136, alignment, byteCount);
}
void *MyAlignedAlloc137(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc137, alignment, byteCount);
}
void *MyAlignedAlloc138(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc138, alignment, byteCount);
}
void *MyAlignedAlloc139(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc139, alignment, byteCount);
}
void *MyAlignedAlloc140(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc140, alignment, byteCount);
}

void *MyAlignedAlloc141(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc141, alignment, byteCount);
}
void *MyAlignedAlloc142(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc142, alignment, byteCount);
}
void *MyAlignedAlloc143(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc143, alignment, byteCount);
}
void *MyAlignedAlloc144(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc144, alignment, byteCount);
}
void *MyAlignedAlloc145(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc145, alignment, byteCount);
}
void *MyAlignedAlloc146(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc146, alignment, byteCount);
}
void *MyAlignedAlloc147(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc147, alignment, byteCount);
}
void *MyAlignedAlloc148(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc148, alignment, byteCount);
}
void *MyAlignedAlloc149(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc149, alignment, byteCount);
}
void *MyAlignedAlloc150(size_t alignment, size_t byteCount) {
    return nlp::invokeAlignedAlloc((void *) MyAlignedAlloc150, alignment, byteCount);
}

void* popAlignedAllocMethod(std::string &libName) {
    void *method = (void*) alignedAllocStk.top();
    alignedAllocStk.pop();
    alignedAllocStkUsed.push(method);
    return method;
}

void resetAlignedAllocMethod() {
    while (!alignedAllocStkUsed.empty()) {
        alignedAllocStk.push(alignedAllocStkUsed.top());
        alignedAllocStkUsed.pop();
    }
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

