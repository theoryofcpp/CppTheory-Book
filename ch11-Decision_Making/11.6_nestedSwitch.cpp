#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;
    
    switch(x) {
        case 10: cout << "Outer switch\n";
        switch(y) {
            case 20: cout << "Inner switch\n";
                     break;
        }
    }
    return 0;
}