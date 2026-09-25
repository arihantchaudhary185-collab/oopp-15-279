#include <iostream>
using namespace std;

void callByValue(int x)
{
    x = x + 10;
}

void callByReference(int &x)
{
    x = x + 10;
}

void callByAddress(int *x)
{
    *x = *x + 10;
}

int main()
{
    int a = 10, b = 10, c = 10;

    callByValue(a);
    cout << "After Call by Value: " << a << endl;

    callByReference(b);
    cout << "After Call by Reference: " << b << endl;

    callByAddress(&c);
    cout << "After Call by Address: " << c << endl;

    return 0;
}