#include <iostream>
using namespace std;

void func(void);

static int count = 10;      // Global variable

int main() {
    while (count--){
        func();
    }
    return 0;
}

void func(void) {
    static int i = 5;       // local static variable
    i++;
    
    cout << "i is: " << i << " and count is: " << count << endl;
}