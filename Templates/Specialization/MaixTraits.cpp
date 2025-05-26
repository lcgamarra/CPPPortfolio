#include <iostream>
using namespace std;

template<typename T>
class MatrixTraits {
public:
    void describe() {
    }
};

template<typename T>
class MatrixTraits<T*> {
public:
    void describe() {
        cout << "Dynamic matrix pointer." << "\n";
    }
};

template<>
class MatrixTraits<float> {
public:
    void describe() {
        cout << "Single precision, 4 bytes" << "\n";
    }
};

template<>
class MatrixTraits<double> {
public:
    void describe() {
        cout << "Double precision, 8 bytes" << "\n";
    }
};

int main() {

    MatrixTraits<float*> floatPointerMatrix;
    floatPointerMatrix.describe();

    MatrixTraits<float> floatMatrix;
    floatMatrix.describe();

    MatrixTraits<double> doubleMatrix;
    doubleMatrix.describe();

    return 0;
}