#include <iostream>
using namespace std;

int main() {
    int time = 12;
    
    // first if statement
    if(time != 0) {
        cout << "Howdy!\n";
        
        // nested if statement
        if (time >= 8) {
            cout << "Have a Good night!\n";
        } else {
            cout << "Have a Good day!\n";
        }
    }
    return 0;
}