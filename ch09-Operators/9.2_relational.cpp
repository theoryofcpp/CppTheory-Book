#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    
    if (a=b) {
        cout << " a is equal to b\n";
    }
    else {
        cout << " a is not equal to b\n";
    }
    
    if (a<b) {
        cout << " a is less than b\n";
    }
    else {
        cout << " a is not less than b\n";
    }
    
    if (a>b) {
        cout << " a is greater than b\n";
    }
    else {
        cout << " a is not greater than b\n";
    }
    
    return 0;
}