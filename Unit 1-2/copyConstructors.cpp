#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor due to which there will be no error
    // copy constructor----------------------------------------------------------------------------
    Number(Number &obj)
    {
        cout << "Copy Constructor Called!!!" << endl;
        a = obj.a;
    }
    // --------------------------------------------------------------------------------------------
    void display()
    {
        cout << "The number called is :" << a << endl;
    }
};
int main()
{
    Number x, y;
    Number z(100);
    z.display();
    x.display();
    Number z1(x);
    z1.display();

    return 0;
}