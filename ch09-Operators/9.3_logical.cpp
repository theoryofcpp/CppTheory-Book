#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    int c = 0;
    
    if (a && b){
        cout << "True\n";
    }
    else {
        cout << "False\n";
    }
    
    if (a || b){
        cout << "True\n";
    }
    
    if (!(c && a)){
        cout << "True\n";
    }
    
    return 0;
}