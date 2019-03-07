#ifndef CHECKING_LIBRARY_H
#define CHECKING_LIBRARY_H

#include <cstddef>

namespace util {

    void check_index(int index, size_t size);

    void check_index(size_t index, size_t size);

}

#endif