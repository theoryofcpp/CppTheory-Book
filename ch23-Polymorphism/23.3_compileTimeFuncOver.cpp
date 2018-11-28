#include <iostream>
using namespace std;

class Numbers {
    public:
        // function with int parameter
        void num(int x) {
            cout << "Value of x is: " << endl;
        }
        // same function with double parameter
        void num(double x) {
            cout << "Value of x is: " << endl;
        }
        // same function with two int parameter
        void num(int x, int y) {
            cout << "Value of x and y is: " << x << ", " << y << endl;
        }
};

// Main function
int main() {
    Numbers value;
    
    // here the polymorphism will work
    // which function is called will depend on the parameters passed
    
    // first function
    value.num(1);
    // second function
    value.num(2.202);
    // third function
    value.num(3, 4);
    
    return 0;
}