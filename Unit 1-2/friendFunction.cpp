#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    friend Complex sumComplex(Complex o1,Complex o2);
    void printNumber(void){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};      
Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    Complex o1,o2,sum;
    o1.setNumber(1,5);
    o1.printNumber();
    o2.setNumber(9,2);
    o2.printNumber();
    sum=sumComplex(o1,o2);
    sum.printNumber();
return 0;
}