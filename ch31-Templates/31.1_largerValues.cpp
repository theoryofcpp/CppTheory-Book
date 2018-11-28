#include <iostream>
using namespace std;

// template function
template <class T> T Large(T n1, T n2) {
    return (n1 > n2) ? n1 : n2;
}

int main() {
    int a, b;
    float x, y;
    char c1, c2;
    
    cout << "Enter two integers: " << endl;
    cin >> a >> b;
    cout << Large(a, b) << " is larger.\n";
    
    cout << "Enter two floating-point numbers: " << endl;
    cin >> x >> y;
    cout << Large(x, y) << " is larger.\n";
    
    cout << "Enter tow characters: " << endl;
    cin >> c1 >> c2;
    cout << Large(c1, c2) << " is larger in ASCII value.\n";
    
    return 0;
}