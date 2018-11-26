#include <iostream>
using namespace std;

int main() {
    int lift_floor;
    
    cout << "Which floor you wanna go? (1,2,3,4): ";
    cin >> lift_floor;
    
    switch (lift_floor) {
        case 1: cout << "Going to floor 1\n";
                break;
        case 2: cout << "Going to floor 2\n";
                break;
        case 3: cout << "Going to floor 3\n";
                break;
        case 4: cout << "Going to floor 4\n";
                break;
    }
    return 0;
}