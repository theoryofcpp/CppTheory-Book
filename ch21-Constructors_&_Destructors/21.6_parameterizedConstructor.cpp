#include <iostream>
using namespace std;

class Construct {
    private:
        int length, breadth, x;
    
    public:
        Construct(int a, int b) {   // parameterized Construtor to initialize a and b
            length = a;
            breadth = b;
        }
        
        int area() {
            x = length * breadth;
            return x;
        }
        
        void display() {
            cout << "Area is: " << x << endl;
        }
};

int main() {
    Construct c(3, 6);      // initialize the data members of object c
    
    c.area();
    c.display();
    
    return 0;
}