#include <iostream>
using namespace std;

class MinusOverload {
    private:
        int a, b;
    
    public:
        void Distance() {
            a = 0;
            b = 0;
        }
        
    MinusOverload(int x, int y) {
        int c;
        a = x;
        b = y;
        c = a-b;
        
        cout << "\nC: " << c;
    }
    
    void display() {
        cout << "\nA: " << a << " B: " << b << endl;
    }
    
    // overloading (-)opertor 
    MinusOverload operator-() {
        a = -a;
        b = -b;
        return MinusOverload(a, b);
    }
};

int main() {
    MinusOverload N1(7, 4), N2(10, 5);
    -N1;
    N1.display();
    -N2;
    N2.display();
    return 0;
}