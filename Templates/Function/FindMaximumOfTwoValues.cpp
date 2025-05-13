#include <iostream>
using namespace std;

template<typename  T>
T maxValueOfTwo(T& a, T& b) {
    T returnValue = a > b ? a : b;
    return returnValue;
}


int main() {

    int x = 3, y = 5;
    int maxValue = maxValueOfTwo(x, y);
    cout << "Max int value: " << maxValue << endl;

    double xd = 3.5, yd = 5.34;
    double doubleMaxValue = maxValueOfTwo(xd, yd);
    cout << "Max double value: " << doubleMaxValue << endl;

    string xs = "test", ys = "ztest";
    string stringMaxValue = maxValueOfTwo(xs, ys);
    cout << "Max string value: " << stringMaxValue << endl;

    return 0;
}