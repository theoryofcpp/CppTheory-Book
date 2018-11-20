#include <iostream>
using namespace std;

int main() {
    int x = 1;
    
    do {
        cout << x << endl;
        x++;
        
        if (x>5) {
            break;
        }
    } while (x<10);
    
    return 0;
}