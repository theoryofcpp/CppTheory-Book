#include <iostream>
using namespace std;

int main() {
    // simple variable
    int i = 5;
    
    // reference variable
    int& r = i;
    
    cout << "Value of i: " << i << endl;
    cout << "Value of i reference: " << r << endl;
    
    return 0;
}