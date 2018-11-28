#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;
    }
    
    catch (int a) {
        cout << "Exception Occured\n";
        cout << "Exception number is: " << a << endl;
    }
}