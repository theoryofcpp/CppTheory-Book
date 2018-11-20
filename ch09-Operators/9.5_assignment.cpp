#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int c = 100;
    int b;
    
    b = a;
    cout << "= operator, b is: " << b << endl;
    b += a;
    cout << "+= operator, b is: " << b << endl;
    b -= a;
    cout << "-= operator, b is: " << b << endl;
    b *= a;
    cout << "*= operator, b is: " << b << endl;
    b /= a;
    cout << "/= operator, b is: " << b << endl;
    
    c %= a;
    cout << "%= operator, c is: " << c << endl;
    c <<= 2;
    cout << "<<= operator, c is: " << c << endl;
    c >>= 2;
    cout << ">>= operator, c is: " << c << endl;
    c &= 2;
    cout << "&= operator, c is: " << c << endl;
    c ^= 2;
    cout << "^= operator, c is: " << c << endl;
    c |= 2;
    cout << "|= operator, c is: " << c << endl;
    
    return 0;
}