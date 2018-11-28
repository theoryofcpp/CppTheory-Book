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

using namespace first_space;
int main() {
    // calls function from the first namespace
    func();
    
    return 0;
}