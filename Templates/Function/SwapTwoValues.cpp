#include <iostream>
using namespace std;

template<typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {

    int x = 3, y = 5;
    cout << "Value before swapping" << endl;
    cout << "x:" << x << " " << "y: " << y << endl;
    swapValues(x, y);
    cout << "Value after swapping" << endl;
    cout << "x:" << x << " " << "y: " << y << endl << endl;

    double dx = 3.45, dy = 6.78;
    cout << "Value before swapping" << endl;
    cout << "x:" << dx << " " << "y: " << dy << endl;
    swapValues(dx, dy);
    cout << "Value after swapping" << endl;
    cout << "x:" << dx << " " << "y: " << dy << endl << endl;

    string sx = "first", sy = "second";
    cout << "Value before swapping" << endl;
    cout << "x:" << sx << " " << "y: " << sy << endl;
    swapValues(sx, sy);
    cout << "Value after swapping" << endl;
    cout << "x:" << sx << " " << "y: " << sy << endl << endl;

    return 0;
}