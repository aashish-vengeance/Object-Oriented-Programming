#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int r,int i){
        real=r;
        imag=i;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    Complex operator +(Complex c){
        Complex temp;
        temp.real=real+ c.real;
        temp.imag=imag+c.imag;
        return temp;
    } 
    Complex operator -(Complex d){
        Complex temp;
        temp.real=real+ d.real;
        temp.imag=imag+ d.imag;
        return temp;
    }
};
class Point{
    int x,y;
    public:
    Point(){
        x=0;
        y=0;
    }
    Point(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    Point operator -() const{
        return Point(-x,-y);
    }
};
int main(){
    Complex c1(5,4);
    Complex c2(7,9);
    Complex c3;
    c3= c1-c2;
    c3.display();
    // Point p1(1,2);
    // Point p2= -p1;
    // p1.display();
    // p2.display();

return 0;
}