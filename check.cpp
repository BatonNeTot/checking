#include "check.h"

#include "string_helper.h"
#include <stdexcept>

namespace util {

    void check_index(int index, size_t size) {
        if (index < 0){
            throw std::out_of_range(str::frmt("index is negative: %d", index));
        }
        if (index >= size) {
            throw std::out_of_range(str::frmt("index is too big: %d", index));
        }
    }

    void check_index(size_t index, size_t size) {
        if (index >= size) {
            throw std::out_of_range(str::frmt("index is too big: %d", index));
        }
    }
}