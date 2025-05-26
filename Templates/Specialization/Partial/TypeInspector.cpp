#include <iostream>
using namespace std;

template<typename T>
class TypeInspector {
public:
    void inspect() {
        cout << "Not pointer" << endl;
    }
};

template<typename T>
class TypeInspector<T*> {
    public:
    void inspect() {
        cout << "Pointer" << endl;
    }
};

int main() {

    TypeInspector<int> inspector;
    inspector.inspect();

    TypeInspector<int*> inspector2;
    inspector2.inspect();

    return 0;
}