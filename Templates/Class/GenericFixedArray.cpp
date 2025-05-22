#include <iostream>
#include <strings.h>
using namespace std;

template<typename T, size_t N>

class GenericFixedArray {
    private:
    T data[N];

    public:
    T& operator[](size_t index) {
        return data[index];
    }

    const T& operator[](size_t index) const {
        return data[index];
    }

    size_t size() const {
        return N;
    }

    void print() {
        for (size_t i = 0; i < N; i++) {
            cout << data[i] << " ";
        }

        cout << std::endl;
    }
};

int main() {

    // Int Fixed Array
    GenericFixedArray<int, 3> arr;

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    arr.print();

    // Float Fixed Array
    GenericFixedArray<float, 3> floatArr;

    floatArr[0] = 1.1;
    floatArr[1] = 2.2;
    floatArr[2] = 3.3;

    floatArr.print();

    // String Fixed Array
    GenericFixedArray<string, 3> stringArr;

    stringArr[0] = "hello";
    stringArr[1] = "world";
    stringArr[2] = "hello world";

    stringArr.print();

}