#include <iostream>
using namespace std;

int main(){
    int num[5], sum = 0;
    cout << "Enter 5 numbers: ";
    
    // storing 5 numbers in array entered by user
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        
        // adding the numbers to find the sum
        sum += num[i];
    }
    
    cout << "Sum is: " << sum << endl;
    
    return 0;
}