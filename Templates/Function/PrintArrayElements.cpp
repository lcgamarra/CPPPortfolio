#include <iostream>
using namespace std;

template<typename T>
void printArrayElements(T arr[], int size) {
    cout << "Printing array elements" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

int main() {

    int nums[] = {1, 2, 3, 4, 5};
    int size = 5;
    printArrayElements(nums, size);

    double doubles[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printArrayElements(doubles, size);

    string strings[] = {"one", "two", "three", "four", "five"};
    printArrayElements(strings, size);

    return 0;
}