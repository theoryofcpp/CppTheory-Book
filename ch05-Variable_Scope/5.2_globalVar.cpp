#include <iostream>
using namespace std;

// global variables
int global = 10;

void globalDisplay() {
    // global variable accessed from within a function
    cout << global << endl;
}

int main() {
    globalDisplay();
    
    // changing the value of global variables
    global = 5;
    globalDisplay();
    
    return 0;
}