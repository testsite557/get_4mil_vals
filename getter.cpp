#include "getter.h"

#include <chrono>

std::string getFieldStr() {
    // static std::mt19937 gen(time(NULL));
    // unsigned len = 1 + gen() % 19;
    // std::string res;
    // for (unsigned i = 0; i < len; ++i) {
    //     res += static_cast<char>(gen());
    // }
    // return res;
    return "0123456789";
}

int getFieldInt() {
    // static std::mt19937 gen(time(NULL));
    // return gen();
    return 487354897;
}
