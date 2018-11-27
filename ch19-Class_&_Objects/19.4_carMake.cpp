#include <iostream>
#include <string>

using namespace std;

class CarMake {
    public:
        string m_make;
        string m_model;
        int m_year;
        float m_price;
        
        void print() {
            cout << "Car Make: " << m_make << ", Car Model: " << m_model << ", Car Build Year: " << m_year << ", Car Price: $" << m_price << " USD." << endl;
        }
};

int main() {
    CarMake ferrari {"Ferrari", "LaFerrari", 2015, 100000.00};
    CarMake bugatti {"Bugatti", "Chiron", 2017, 250000.00};
    
    ferrari.print();
    bugatti.print();
    
    return 0;
}