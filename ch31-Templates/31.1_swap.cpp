#include <iostream>
using namespace std;

// template function
template <typename T> void Swap(T &n1, T &n2) {
    T temp;
    temp = n1;
    n1 = n2;
    n2 =temp;
}

int main() {
    int a = 1, b = 2;
    float x = 1.1, y = 2.2;
    char c1 = 'a', c2 = 'b';
    
    cout << "Before passing data to function template.\n";
    cout << "a is: " << a << "\nb is: " << b << endl;
    cout << "x is: " << x << "\ny is: " << y << endl;
    cout << "c1 is: " << c1 << "\nc2 is: " << c2 << endl;
    
    Swap(a, b);
    Swap(x, y);
    Swap(c1, c2);
    
    cout << "\n\nAfter passing data to function template.\n";
    cout << "a is: " << a << "\nb is: " << b << endl;
    cout << "x is: " << x << "\ny is: " << y << endl;
    cout << "c1 is: " << c1 << "\nc2 is: " << c2 << endl;
    
    return 0;
}