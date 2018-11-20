#include <iostream>
using namespace std;

// global variables
int global = 10;

int main() {
    int global = 5;
    
    cout << "Global variable's global: " << ::global << endl;
    cout << "Local variable's global: " << global << endl;
    
    return 0;
}