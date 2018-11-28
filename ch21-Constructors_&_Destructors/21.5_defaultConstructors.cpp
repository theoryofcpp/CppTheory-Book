#include <iostream>
using namespace std;

class construct {
    public:
        int a, b;
        
        // Default Construtor
        construct() {
            a = 10;
            b = 20;
        }
};

int main() {
    // Default Construtor called automatically when the object is created
    construct c;
    
    cout << "a: " << c.a << endl;
    cout << "b: " << c.b;
    
    return 0;
}