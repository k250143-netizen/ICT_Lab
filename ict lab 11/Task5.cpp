#include <iostream>
using namespace std;

class Employee {
protected:
    int employeeID;
    float salary;

public:
    Employee(int id, float sal) {
        employeeID = id;
        salary = sal;
    }
};

class PartTimeEmployee : protected Employee {
public:
    PartTimeEmployee(int id, float sal) : Employee(id, sal) {}

    void calculatePay(int hoursWorked) {
        float totalPay = salary * hoursWorked;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Total Salary: " << totalPay << endl;
    }
};

int main() {
    PartTimeEmployee p1(101, 500);

    p1.calculatePay(6);

    return 0;
}
