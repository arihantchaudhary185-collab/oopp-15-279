#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll;
    float marks;

public:

    void input()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }

    void result()
    {
        if (marks >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter details of Student 1:" << endl;
    s1.input();

    cout << "\nEnter details of Student 2:" << endl;
    s2.input();

    cout << "\n--- Student 1 ---" << endl;
    s1.display();
    s1.result();

    cout << "\n--- Student 2 ---" << endl;
    s2.display();
    s2.result();

    return 0;
}