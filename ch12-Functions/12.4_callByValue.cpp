#include <iostream>

using namespace std;

// function declaration
void swap(int n1, int n2);

// main function
int main() {
    int a = 100;
    int b = 200;
    
    cout << "Before swap, a: " << a << endl;
    cout << "Before swap, b: " << b << endl;
    
    swap(a, b);
    
    cout << "After swap, a: " << a << endl;
    cout << "After swap, b: " << b << endl;
    
    return 0;
    
}

// function to return max value from two numbers
void swap(int n1, int n2){
    int temp;
    
    temp = n1;       // save the value of n1 into temp
    n1 = n2;         // put n2 into n1
    n2 = temp;       // put n1 into n2
    
    return;
}