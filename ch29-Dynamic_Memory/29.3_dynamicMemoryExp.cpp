#include <iostream>
using namespace std;

int main() {
    int *p = NULL;
    p = new int;
    
    *p = 420;
    cout << "Value of P is: " << *p << endl;
    
    delete p;
    
    return 0;
}