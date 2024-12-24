#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int x,int y); //Default Constructor
    void printNumber(void);
};
Complex ::Complex(int x,int y){
    a=x;
    b=y;
}
void Complex ::printNumber(void){
    cout<<a<<" + i"<<b<<endl;
}
int main(){
    // implicit call
    Complex o(1,4);
    o.printNumber();
    // explicit call
    Complex v= Complex(4,3);
    v.printNumber();
return 0;
}