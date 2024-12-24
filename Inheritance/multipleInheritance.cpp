#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Base1{
    protected:
    int base1int;
    public:
    void setdata1(int a){
        base1int=a;
    }
};
class Base2{
    protected:
    int base2int;
    public:
    void setdata2(int a){
        base2int=a;
    }
};
class Derived: public Base1,public Base2{
    public:
    void show(){
        cout<<"The value of base1 is :"<<base1int<<endl;
        cout<<"The value of base1 is :"<<base2int<<endl;
        cout<<"The sum of these values is "<<base1int+base2int<<endl;
    }
};
int main(){
    Derived d;
    d.setdata1(8);
    d.setdata2(11);
    d.show();
return 0;
}