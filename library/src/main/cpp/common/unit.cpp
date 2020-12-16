//
// Created by chenwangwang on 2020/12/15.
//

#include <utility>
#include <string>
#include "unit.h"
#include "Log.h"

namespace nlp {
    void convert(double_t size, std::pair<double_t, Unit> &result) {
        while (result.first >= 1024) {
            result.first /= 1024;
            result.second = static_cast<Unit>(1 + static_cast<int>(result.second));
        }
    }

    std::string convertAutoUnit(double_t size) {
        std::pair<double_t, Unit> result = std::make_pair(size, Unit::Byte);
        convert(size, result);

        switch (result.second) {
            case Unit::Byte:
                return std::to_string(result.first) + "Byte";
            case Unit::KB:
                return std::to_string(result.first) + "KB";
            case Unit::MB:
                return std::to_string(result.first) + "MB";
            case Unit::GB:
                return std::to_string(result.first) + "GB";
            case Unit::TB:
                return std::to_string(result.first) + "TB";
            case Unit::PB:
                return std::to_string(result.first) + "PB";
            case Unit::EB:
                return std::to_string(result.first) + "EB";
            default:
                break;
        }

        return "convert unit error";
    }
}