#include <iostream>
using namespace std;

template<typename T>

class GenericStack {
    private:
    int currentPosition = -1;
    T arr[10];

    public:
    GenericStack() {
    }

    ~GenericStack() {

    }

    void push(T data) {
        currentPosition++;
        arr[currentPosition] = data;
    }

    T pop() {
        currentPosition--;
        return arr[currentPosition];
    }

    T top() {
        return arr[currentPosition];
    }

    void print() {
        for (int i = 0; i <= currentPosition; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};


int main() {

    GenericStack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.print();

    stack.pop();
    stack.print();

    int top = stack.top();
    std::cout << top << std::endl << std::endl;

    GenericStack<float> floatStack;
    floatStack.push(1.1);
    floatStack.push(2.2);
    floatStack.push(3.3);
    floatStack.print();

    floatStack.pop();
    floatStack.print();

    float floaTop = floatStack.top();
    std::cout << floaTop << std::endl << std::endl;


    GenericStack<string> stringStack;
    stringStack.push("one");
    stringStack.push("two");
    stringStack.push("three");
    stringStack.print();

    stringStack.pop();
    stringStack.print();

    string stringTop = stringStack.top();
    std::cout << stringTop << std::endl << std::endl;

    return 0;
}