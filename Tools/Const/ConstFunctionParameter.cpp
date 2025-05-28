#include <iostream>
using namespace std;

void printMessage(const std::string &msg) {
    cout << msg << endl;
}


int main() {
    string message = "Hello World!";
    printMessage(message);

    return 0;
}
