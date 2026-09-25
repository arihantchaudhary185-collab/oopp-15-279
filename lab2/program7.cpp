#include <iostream>
using namespace std;

void updateSalary(int &salary)
{
    salary = salary + (salary * 10 / 100);
}

void updateSalaryPointer(int *salary)
{
    *salary = *salary + (*salary * 10 / 100);
}

int main()
{
    // Reference variable
    int salary = 50000;
    int &newSalary = salary;

    updateSalary(newSalary);
    cout << "Salary using reference: " << salary << endl;

    // Pointer
    int salary2 = 50000;
    int *newSalary2 = &salary2;

    updateSalaryPointer(newSalary2);
    cout << "Salary using pointer: " << salary2 << endl;

    return 0;
}