#include <iostream>
using namespace std;

class Box {
    public:
        double length;
        double breadth;
        double height;
};

int main() {
    Box box1;
    Box box2;
    double volume = 0.0;
    
    // box1 specs
    box1.length = 3.0;
    box1.breadth = 5.0;
    box1.height = 7.0;
    
    // box2 specs
    box2.length = 6.0;
    box2.breadth = 8.0;
    box2.height = 10.0;
    
    // volume of box1
    volume = box1.length * box1.breadth * box1.height;
    cout << "volume of box1: " << volume << endl;
    
    // volume of box2
    volume = box2.length * box2.breadth * box2.height;
    cout << "volume of box2: " << volume << endl;
    
    return 0;
}