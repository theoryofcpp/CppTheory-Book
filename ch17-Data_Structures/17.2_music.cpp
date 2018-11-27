#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Music {
        string bandName;
        string albumName;
        int releaseYear;
        string genre;
    } mine, yours;
    
    void printMusic (Music music);

int main() {
    string mystr;
    
    mine.bandName = "Linkin Park";
    mine.albumName = "Hybrid Theory";
    mine.releaseYear = 2000;
    mine.genre = "Alternative Rock";
    
    cout << "Enter your Favorite Music Band Name: ";
    getline (cin,yours.bandName);
    cout << "Enter the Album Name You Love Most? ";
    getline (cin,yours.albumName);
    cout << "Enter album's Release Year: ";
    getline (cin,mystr);
    stringstream(mystr) >> yours.releaseYear;
    cout << "Enter it's Music Genre: ";
    getline (cin,yours.genre);
    
    cout << "My Favorite Music is:\n"; 
    printMusic (mine);
    cout << "Your Favorite Music is:\n";
    printMusic (yours);
    
    return 0;
}

void printMusic (Music music) {
    cout << music.albumName << " (" << music.releaseYear << ") by " << music.bandName << ", Which is " << music.genre << ".\n";
}