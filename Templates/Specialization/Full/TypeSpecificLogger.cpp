#include <iostream>
using namespace std;

template<typename T>
class Logger {
    public:
    void log(T value) {
        std::cout << "Generic log: " << value << std::endl;
    }
};

template<>
class Logger<bool> {
    public:
    void log(bool value) {
        if (value) {
            std::cout << "Specialized log: true" << std::endl;
        }
        else {
            std::cout << "Specialized log: false" << std::endl;
        }
    }

};

int main() {
    Logger<int> logger;
    logger.log(42);

    Logger<bool> logger2;
    logger2.log("Hello World!");

    return 0;
}