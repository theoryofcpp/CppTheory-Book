#include <iostream>
#define AREA(l, b) (l * b)

using namespace std;

int main() {
    int l1 = 5;
    int l2 = 10;
    int area;
    
    area = AREA(l1, l2);
    
    cout << "Area of rectangle is: " << area << endl;
    return 0;
}