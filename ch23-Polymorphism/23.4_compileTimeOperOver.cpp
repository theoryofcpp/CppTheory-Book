#include <iostream>
using namespace std;

class Complex {
    private:
        int real, imag;         // imag for imagination
        
    public:
        Complex (int r=0, int i=0) {
            real = r;
            imag = i;
        }
        Complex operator + (Complex const & obj) {
            Complex res;
            
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            
            return res;
        }
        void print() {
            cout << real << " + i " << imag << endl;
        }
};

// Main function
int main() {
    Complex n1(1, 2), n2(4, 6);
    Complex n3 = n1 + n2;
    
    n3.print();
    
    return 0;
}