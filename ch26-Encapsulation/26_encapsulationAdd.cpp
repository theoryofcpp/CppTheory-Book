#include <iostream>
using namespace std;

class Add {
    public:
        Add(int i = 0) {
            total = i;
        }
        
        // interface to outside world
        void addNum(int number) {
            total += number;
        }
        
        // interface to outside world
        int getTotal() {
            return total;
        }
        
    private:
        // hidden data from outside world
        int total;
};

int main() {
    Add a;
    
    a.addNum(2);
    a.addNum(20);
    a.addNum(200);
    
    cout << "total is: " << a.getTotal() << endl;
    return 0;
}