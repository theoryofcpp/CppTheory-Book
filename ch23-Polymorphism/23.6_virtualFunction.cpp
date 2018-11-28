#include <iostream>
using namespace std;

// base class
class Base
{
  public:
    virtual void show()
    {
        cout << "Base Class\n";
    }
};

// sub class
class Derived : public Base
{
  public:
    void show()
    {
        cout << "Derived Class\n";
    }
};

// Main function
int main()
{
    Base *b = new Derived;

    b->show(); // Run Time Polymorphism

    return 0;
}