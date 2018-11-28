#include <iostream>
using namespace std;

class Box {
    public:
        Box() {
            cout << "constructor called!\n";
        }
        ~Box() {
            cout << "destructor called\n";
        }
};

int main() {
    Box *boxArray = new Box[4];
    delete [] boxArray;
    
    return 0;
}