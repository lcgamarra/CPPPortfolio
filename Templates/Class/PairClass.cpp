#include <iostream>
using namespace std;

template<typename T1, typename T2>

class CustomPair {
    private:
    T1 firstValue;
    T2 secondValue;

    public:
    void setFirstValue(T1 newValue) {
        firstValue = newValue;
    }

    void setSecondValue(T2 newValue) {
        secondValue = newValue;
    }

    void print() {
        std::cout << firstValue << " " << secondValue << std::endl;
    }
};

int main() {

    CustomPair pair = CustomPair<int, float>();
    pair.setFirstValue(42);
    pair.setSecondValue(23);
    pair.print();

    CustomPair floatPair = CustomPair<float, string>();
    floatPair.setFirstValue(42.42);
    floatPair.setSecondValue("string1");
    floatPair.print();

    CustomPair<string, string> stringPair = CustomPair<string, string>();
    stringPair.setFirstValue("string1");
    stringPair.setSecondValue("string2");
    stringPair.print();

    return 0;
}