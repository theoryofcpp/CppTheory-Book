#include <iostream>
#include <string>

using namespace std;

int main() {
    // ask for a name
    cout << "What is your name? ";
    
    // get the name from input
    string name;        // define the name in string
    cin >> name;        // read the name into console
    
    // write message
    cout << "Hello, " << name << "!" << endl;
    
    return 0;
}