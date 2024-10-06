#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Employee
{
private:
    int id;
    static int count;
public:
    void setdata(void)
    {
        cout << "Enter the id:" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of the employee is " << id << " and number of employee is: " << count << endl;
    }
    static void getCount(void){
        cout<<"The value of count is: "<<count<<endl;
    }
};
int Employee ::count=1000;
int main()
{
    Employee ashish, op, gh;
    ashish.setdata();
    ashish.getdata();
    ashish.getCount();
    op.setdata();
    op.getdata();
    op.getCount();
    gh.setdata();
    gh.getdata();
    gh.getCount();
    return 0;
}