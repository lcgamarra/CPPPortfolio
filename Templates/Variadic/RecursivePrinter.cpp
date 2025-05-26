#include <iostream>
using namespace std;

void print() {
    std::cout << "Done";
}

template<typename T, typename... Args>
void print(T first, Args... rest) {
    std::cout << first << "\n";
    print(rest...);
}

int main() {

    print(1, "hello", 3.14);

}