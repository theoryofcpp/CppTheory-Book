#include <iostream>
using namespace std;

int main() {
    int x = 1;
    
    do {
        if (x==5) {
            x++;
            continue;
        }
        cout << x << endl;
        x++;
        
    } while (x<11);
    
    return 0;
}