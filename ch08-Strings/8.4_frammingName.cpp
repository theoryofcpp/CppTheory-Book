#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    
    // build the message that we want to print
    string greeting = "Hello, " + name + "!";
    
    // build the second and fourth line
    string spaces(greeting.size(), ' ');
    string second = "* " + spaces + " *";
    
    // build the first and fifth line
    string first(second.size(), '*');
    
    // print the whole message
    cout << endl;
    cout << first << endl;
    cout << second << endl;
    cout << "* " << greeting << " *" << endl;
    cout << second << endl;
    cout << first << endl;
    
    return 0;
}