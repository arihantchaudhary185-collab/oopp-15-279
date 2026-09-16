//Class Point — Input and Show Methods
#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    void input()
    {
        cout << "Enter x: ";
        cin >> x;

        cout << "Enter y: ";
        cin >> y;
    }

    void show()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
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