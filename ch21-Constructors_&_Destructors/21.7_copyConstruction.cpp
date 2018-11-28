#include <iostream>
using namespace std;

class CopyCon {
    int a, b;
    
    public:
        CopyCon (int x, int y) {
            a = x;
            b = y;
            
            cout << "Here is the initializion of Constructor\n";
        }
        
        void display() {
            cout << "Values: \t" << a << "\t" << b << endl;
        }
};

int main() {
    CopyCon obj1(20, 35);
    
    // copy constructor
    CopyCon obj2 = obj1;
    
    obj1.display();
    obj2.display();
    
    return 0;
}