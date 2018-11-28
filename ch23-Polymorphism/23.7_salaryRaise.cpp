#include <iostream>
using namespace std;

class Employee {
    public:
        virtual void raiseSalary() {
            // some codes goes here
        }
        virtual void promote() {
            // some codes goes here
        }
};

class Manager : public Employee {
    virtual void raiseSalary() {
        // Manager's specific raiseSalary law goes here
        // Salary increment may differ from other workers
    }
    virtual void promote() {
        // Manager's specific promotion law goes here
    }
};

// A Manager may have many employee's working under him
// and there may be simple specific rules to increase their salaries
void globalRaiseSalary (Employee *emp[], int n) {
    for(int i=0; i<n; i++) {
        emp[i] -> raiseSalary();        // Polymorphic Call: calls raiseSalary()
                                        // According to the actual object, not according to the type of pointer
    }
}