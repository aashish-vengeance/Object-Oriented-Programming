#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Complex;
class Calculator{
    public:
    int add(int c,int d){
        return (c+d);
    }
    int addRealComplex(Complex , Complex);
    int addComplexComplex(Complex , Complex);
};
class Complex{
    int a;
    int b;
    // Individually declaring functions as friends
    // friend int Calculator :: addRealComplex(Complex o1,Complex o2); 
    // friend int Calculator :: addComplexComplex(Complex o1,Complex o2); 
    friend class Calculator;
    // Declaring the entire Calculator class as friend 
        public:
    void setData(int n1,int n2){    
        a=n1;
        b=n2;
    }
    void print(void){
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int Calculator:: addRealComplex(Complex o1, Complex o2){
    return (o1.a+o2.a);
}
int Calculator ::addComplexComplex(Complex o1, Complex o2){
    return (o1.b+o2.b);
}
int main(){
    Complex o1,o2;
    o1.setData(1,5);
    o1.print();
    o2.setData(9,5);
    o2.print();
    Calculator sum,com;
    int d=sum.addRealComplex(o1,o2);
    int e=com.addComplexComplex(o1,o2);
    cout<<d<<endl;
    cout<<e;
return 0;
}