#include <iostream>
using namespace std;

class B;

class A {
    public:
        void showB (B&);
};

class B {
    private:
        int b;
        
    public:
        B() {
            b=0;
        }
        friend void A::showB(B& x);         // Friend Function
};

void A::showB (B& x) {
    // since showB() is friend of B, it can access private members of B
    cout << "B::b is: " << x.b << endl;
}

int main() {
    A a;
    B x;
    a.showB(x);
    
    return 0;
}