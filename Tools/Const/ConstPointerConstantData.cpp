#include <iostream>
using namespace std;

int main() {

    int value = 5;
    const int* pointer;
    pointer = &value;
    *pointer = 10;

    return 0;
}