#include <iostream>
using namespace std;

class Circle {
    public:
        double radius;
        double compute_area() {
            return 3.14*radius*radius;
        }
};

int main() {
    Circle ball;
    ball.radius = 3.5;
    
    cout << "Radius is: " << ball.radius << endl;
    cout << "Area is: " << ball.compute_area();
    
    return 0;
}