#include <iostream>
using namespace std;

// base class
class Parent {
    protected:
        int number_protected;       // pretected data member;
};

// sub class or derived class of class Parent
class Child : public Parent {
    public:
        void setNumber(int number) {
            // child class can access the inherited protected data members from parent class
            number_protected = number;
        }
        
        void displayID() {
            cout << "Protected Number is: " << number_protected << endl;
        }
};

int main() {
    Child obj1;
    
    obj1.setNumber(2);
    obj1.displayID();
    
    return 0;
}