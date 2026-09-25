#include <iostream>
using namespace std;

inline int add(int a, int b = 10)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int multiply(int a, int b = 2)
{
    return a * b;
}

int main()
{
    cout << "Addition: " << add(5) << endl;
    cout << "Addition of 3 numbers: " << add(5, 10, 20) << endl;
    cout << "Multiplication: " << multiply(5) << endl;

    return 0;
}