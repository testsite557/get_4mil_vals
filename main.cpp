#include "getter.h"

#include <iostream>
#include <chrono>

class Logger {
private:
    std::chrono::time_point<std::chrono::steady_clock> start;
    std::string message;
public:
    explicit Logger(std::string log_name) : start(std::chrono::steady_clock::now()), message(log_name) {}
    ~Logger() {
        std::cerr << message << ": "
            << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start).count()
            << " ms" << std::endl;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    {
        Logger log("str");
        for (unsigned i = 0; i < 4'000'000; ++i) {
            getFieldStr();
        }
    }
    {
        Logger log("int");
        for (unsigned i = 0; i < 4'000'000; ++i) {
            getFieldInt();
        }
    }
    return 0;
}
