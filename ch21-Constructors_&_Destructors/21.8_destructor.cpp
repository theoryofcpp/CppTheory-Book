#include <iostream>
 
struct A {
    int i;
 
    A ( int i ) : i ( i ) {
        std::cout << "ctor a" << i << '\n';   // ctor == constructor
    }

    ~A() {          // declaring the destructor of constructor A
        std::cout << "dtor a" << i << '\n';   // dtor == destructor
    }
};
 
A a0(0);
 
int main() {
    A a1(1);
    A* p;
 
    { // nested scope
        A a2(2);
        p = new A(3);
    } // a2 out of scope
 
    delete p; // calls the destructor of a3
}