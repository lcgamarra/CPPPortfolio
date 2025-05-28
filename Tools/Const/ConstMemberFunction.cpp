#include <iostream>
using namespace std;

class Book {
private:
    string title = "Default book title";
    string author = "Default author name";
public:
    string getTitle() const{
        return title;
    }
};

int main() {

    Book book = Book();
    string title = book.getTitle();
    cout << title << endl;

    return 0;
}