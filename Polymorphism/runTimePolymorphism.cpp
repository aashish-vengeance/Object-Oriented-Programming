#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    int base;
    void display(){
        cout<<"Displaying base class element in base class :"<<base<<endl;
    }
};
class Derived : public Base{
    public:
    int derived;
    void display(){
        cout<<"Displaying base class element in derived class : "<<base<<endl;
        cout<<"Displaying derived class element in derived class : "<<derived<<endl;
    }
};
int main(){
    // Base * basePointer;
    // basePointer->base=140;
    // basePointer->display();
    Derived * derPointer;
    derPointer->base=145;
    derPointer->derived=1000;
    derPointer->display();
return 0;
}