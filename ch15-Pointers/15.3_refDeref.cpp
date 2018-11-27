#include <iostream>
using namespace std;

int main() {
    int *xy;
    int y = 10;
    
    cout << "Address of y: " << &y << endl;
    cout << "Value of y: " << y << endl;
    
    xy = &y;
    
    cout << "Address of pointer xy: " << xy << endl;
    cout << "Content of pointer xy: " << *xy << endl;
    
    y = 20;
    
    cout << "Address of pointer xy: " << xy << endl;
    cout << "Content of pointer xy: " << *xy << endl;
    
    *xy = 5;
    
    cout << "Address of y: " << &y << endl;
    cout << "Value of y: " << y << endl;
    
    return 0;
}