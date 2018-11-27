#include <iostream>
using namespace std;

class Circle {
    private:
        double radius;                  // private data members
        
    public:
        double compute_area(double r) {         // public member function
            radius = r;
            double area = 3.14*radius*radius;
            
            cout << "Radius is: " << radius << endl;
            cout << "Area is: " << area << endl;
        }
};                                      // always put semicolon (;) after defining a class

int main() {
    Circle ball;
    ball.compute_area(3.5);
    
    return 0;
}