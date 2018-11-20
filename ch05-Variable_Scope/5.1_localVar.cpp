#include <iostream>
using namespace std;

void vars() {
    // this is a local variable
    int x = 10;
    cout << x;
}

int main() {
    cout << "x is: ";
    vars();
    
    return 0;
}