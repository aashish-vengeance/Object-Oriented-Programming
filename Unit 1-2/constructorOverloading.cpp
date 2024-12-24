#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber(void);
};
void Complex ::printNumber(void)
{
    cout << a << " + i" << b << endl;
}
int main()
{
    Complex o(3, 5);
    o.printNumber();
    Complex z(1);
    z.printNumber();

    return 0;
}