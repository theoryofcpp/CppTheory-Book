#include <iostream>
using namespace std;

// Base class
class Parent {
    public:
        int id_p;
};

// Sub class inheriting from Base class
class Child : public Parent {
    public:
        int id_c;
};

// Main function
int main() {
    Child obj1;
    
    // An object of class child has all data members and member functions of class Parent
    obj1.id_c = 10;
    obj1.id_p = 20;
    
    cout << "Child id is: " << obj1.id_c << "\nParent id is: "<< obj1.id_p << endl;
    
    return 0;
}