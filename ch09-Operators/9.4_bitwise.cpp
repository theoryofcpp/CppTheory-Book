#include <iostream>
using namespace std;

int main() {
    unsigned int a = 60;        // 60 == 0011 1100
    unsigned int b = 13;        // 13 == 0000 1101
    int c = 0;
    
    c = a&b;
    cout << "A&B is: " << c << endl;
    
    c = a|b;
    cout << "A|B is: " << c << endl;
    
    c = a^b;
    cout << "A^B is: " << c << endl;
    
    c = ~a;
    cout << "~A is: " << c << endl;
    
    c = a << 2;
    cout << "A << 2 is: " << c << endl;
    
    c = a >> 2;
    cout << "A >> 2` is: " << c << endl;
    
    return 0;
}