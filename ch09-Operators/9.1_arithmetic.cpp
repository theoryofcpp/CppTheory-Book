#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 10;
    int b = 5;
    int c;
    
    c = a+b;
    cout << "C = A+B is: " << c << endl;
    
    c = a-b;
    cout << "C = A-B is: " << c << endl;
    
    c = a*b;
    cout << "C = A*B is: " << c << endl;
    
    c = a/b;
    cout << "C = A/B is: " << c << endl;
    
    c = a%b;
    cout << "C = A%B is: " << c << endl;
    
    c = a++;
    cout << "C = A++ is: " << c << endl;
    
    c = b--;
    cout << "C = B-- is: " << c << endl;
    
    return 0;
}