#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct band {
        string bandName;
        int releaseYear;
    };

int main() {
    string mystr;
    
    band aband;
    band *pband;
    pband = &aband;
    
    cout << "Enter Band Name: ";
    getline (cin, pband->bandName);
    cout << "Enter Year: ";
    getline (cin, mystr);
    stringstream (mystr) >> pband->releaseYear;
    
    cout << "\nYou've Entered:\n";
    cout << pband->bandName << " (" << pband->releaseYear << ").\n";
    
    return 0;
}