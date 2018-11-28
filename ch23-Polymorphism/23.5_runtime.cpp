#include <iostream>
using namespace std;

// base class
class Parent
{
  public:
    void print()
    {
        cout << "Parent Print Function\n";
    }
};

// derived class
class Child : public Parent
{
  public:
    // we're defining the same member function already exists in Parent
    void print()
    {
        cout << "Child Print Function\n";
    }
};

// Main function
int main()
{
    Parent obj1;          // object of Parent class
    Child obj2 = Child(); // object of Child class

    obj1.print(); // calling the print() from Parent
    obj2.print(); // overriding the print() in Parent and calling it from Child

    return 0;
}