//Class Point — Input and Show Methods
#include <iostream>
using namespace std;

class Point
{
    int a, b;

public:
    void input()
    {
        cout << "Enter a: ";
        cin >> a;

        cout << "Enter b: ";
        cin >> b;
    }

    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    Point p1, p2;

    cout << "Enter details of Point 1:" << endl;
    p1.input();

    cout << "\nEnter details of Point 2:" << endl;
    p2.input();

    cout << "\nPoint 1:" << endl;
    p1.show();

    cout << "\nPoint 2:" << endl;
    p2.show();

    return 0;
}