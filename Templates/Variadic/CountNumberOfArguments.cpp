#include <iostream>
using namespace std;

int countArgs() {
    return 0;
}

template<typename T, typename... Args>
int countArgs(T first, Args... args) {
    return 1 + countArgs(args...);
}

int main() {

    int zeroArgs = countArgs();
    int oneArgs = countArgs(1);
    int fourArgs = countArgs(1,  2,  3,  4);

    cout << "Zero Args:" << zeroArgs << endl;
    cout << "One Args:" << oneArgs << endl;
    cout << "Four Args:" << fourArgs << endl;

    return 0;
}