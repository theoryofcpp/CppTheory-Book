#include <iostream>
using namespace std;

class DateClass {
    public:
        int m_year;
        int m_month;
        int m_day;
        
        void print() {
            cout << m_year << "/" << m_month << "/" << m_day << endl;
        }
};

int main() {
    DateClass today {2018, 9, 1};
    
    today.m_day = 2;        // use member selection operator to
                            // select a member variable of the class
    today.print();
    
    return 0;
}