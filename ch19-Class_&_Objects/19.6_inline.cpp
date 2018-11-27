#include <iostream>
using namespace std;

inline int Max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    cout << "Max (10, 20): " << Max(10, 20) << endl;
    cout << "Max (0, 10): " << Max(0, 10) << endl;
    cout << "Max (1050, 2050): " << Max(1050, 2050) << endl;
    
    return 0;
}