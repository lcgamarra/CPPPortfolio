#include <iostream>
#include <vector>
using namespace std;

template<typename T>

class GenericStack {
    private:
    vector<T> elements;

    public:
    GenericStack() {
    }

    ~GenericStack() {

    }

    void push(T& item) {
        elements.push_back(item);
    }

    void pop() {
        elements.pop_back();
    }

    T top() {
        return elements.back();
    }

    void print() {
        for (int i = 0; i < elements.size(); i++) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }
};


int main() {

    GenericStack<int> stack;
    int x = 1, y = 2, z = 3;
    stack.push(x);
    stack.push(y);
    stack.push(z);
    stack.print();

    stack.pop();
    stack.print();

    int top = stack.top();
    std::cout << top << std::endl << std::endl;

    float xf = 1.1, yf = 2.2, zf = 3.3;
    GenericStack<float> floatStack;
    floatStack.push(xf);
    floatStack.push(yf);
    floatStack.push(zf);
    floatStack.print();

    floatStack.pop();
    floatStack.print();

    float floaTop = floatStack.top();
    std::cout << floaTop << std::endl << std::endl;


    string xs = "one", ys = "two", zs = "three";
    GenericStack<string> stringStack;
    stringStack.push(xs);
    stringStack.push(ys);
    stringStack.push(zs);
    stringStack.print();

    stringStack.pop();
    stringStack.print();

    string stringTop = stringStack.top();
    std::cout << stringTop << std::endl << std::endl;

    return 0;
}