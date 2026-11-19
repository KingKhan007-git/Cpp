#include <iostream>
#include <string>
using namespace std;

class Book {
    string title, author;
    int copies;
public:
    Book() : Book("Untitled", "Unknown", 0) {}
    explicit Book(const string& t) : Book(t, "Unknown", 1) {}
    Book(const string& t, const string& a) : Book(t, a, 1) {}
    Book(const string& t, const string& a, int c)
        : title(t), author(a), copies(c < 0 ? 0 : c) {}
    void print() const {
        cout << title << " | " << author << " | copies: " << copies << '\n';
    }
};

int main() {
    Book empty;
    Book donated("The Alchemist");
    Book complete("Clean Code", "Robert C. Martin", 4);
    Book invalid("Invalid Record", "Library", -5);
    empty.print();
    donated.print();
    complete.print();
    invalid.print();
}