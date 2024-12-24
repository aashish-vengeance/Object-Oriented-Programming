#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    int a;
    public:
    A & setVal(int a){
        // returns an object
        this->a=a;
        return * this;
    }
    void setData(int a){
        // this pointer solves ambiguity between local & class variable
        this->a=a;
    }
    void getData(){
        cout<<a<<endl;
    }
};
int main(){
    A a1;
    a1.setData(99);
    a1.getData();
    A a2;
    a2.setVal(87).getData();
return 0;
}