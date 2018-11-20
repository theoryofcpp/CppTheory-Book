#include<iostream>

using namespace std;

int main() {
  cout << "How old are you? ";
  int x;                // we'll need x variable in the next line
  cin >> x;             // first usage of x variable
  
  cout << "What is your birth date? ";
  int y;                // before this line there isn't any usage of y, so we define it here
  cin >> y;             // first usage of y variable
  
  cout << "So you are " << x << " years old and " << y << " is your birth date." << endl;
  
  return 0;
}