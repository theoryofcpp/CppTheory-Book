#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Music {
        string bandName;
        string firstAlbum;
        int releaseYear;
    } band[5];
    
    void printMusic (Music band);

int main() {
    string mystr;
    int n;
    
    for(n = 0; n < 5; n++) {
        cout << "Enter Band Name: ";
        getline (cin, band[n].bandName);
        cout << "Enter Their First Album Name: ";
        getline (cin, band[n].firstAlbum);
        cout << "Enter First Album's Release Year: ";
        getline (cin, mystr);
        stringstream(mystr) >> band[n].releaseYear;
    }
    
    cout << "Band Names:\n";
    for (n = 0; n < 5; n++) {
        printMusic(band[n]);
    }
    
    return 0;
}

void printMusic (Music band) {
    cout << band.firstAlbum << " (" << band.releaseYear << ") by " << band.bandName << ".\n";
}