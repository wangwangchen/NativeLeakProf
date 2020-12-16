//
// Created by chenwangwang on 2020/12/15.
//

#ifndef NATIVELEAKPROF_UNIT_H
#define NATIVELEAKPROF_UNIT_H

#include <cmath>

namespace nlp {

    enum class Unit{
        Byte, KB, MB, GB, TB, PB, EB
    };

    void convert(double_t size, std::pair<double_t, Unit> &result);

    std::string convertAutoUnit(double_t size);

}


#endif //NATIVELEAKPROF_UNIT_H
