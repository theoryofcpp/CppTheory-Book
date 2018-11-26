#include <iostream>

using namespace std;

// function declaration
int max(int n1, int n2);

// main function
int main() {
    int a = 100;
    int b = 200;
    int c;
    
    c = max(a, b);
    cout << "Max value is: " << c << endl;
    
    return 0;
    
}

// function to return max value from two numbers
int max(int n1, int n2){
    int res;
    
    if (n1 > n2) {
        res = n1;
    } else {
        res = n2;
    }
    
    return res;
}