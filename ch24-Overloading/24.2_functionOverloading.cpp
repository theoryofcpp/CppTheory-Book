#include <iostream>
#include <string>

using namespace std;

class printData {
    public:
        void print(int x) {
            cout << "Printing int: " << x << endl;
        }
        void print(string y) {
            cout << "Printing string: " << y << endl;
        }
        void print(double z) {
            cout << "Printing double: " << z << endl;
        }
};

int main(void) {
    printData a;
    
    a.print(10);
    a.print("Hello, World");
    a.print(8.26);
    
    return 0;
}