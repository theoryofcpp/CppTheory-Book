#include <iostream>
using namespace std;

// first namespace
namespace first_space {
    void func() {
        cout << "First Namespace\n";
    }
}

// second namespace
namespace second_space {
    void func() {
        cout << "Second Namespace\n";
    }
}

int main() {
    // calls function from the first namespace
    first_space::func();
    
    // calls function from the second namespace
    second_space::func();
    
    return 0;
}