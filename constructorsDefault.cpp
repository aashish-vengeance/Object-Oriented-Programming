#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(); //Default Constructor
    void printNumber(void);
};
Complex ::Complex(){
    a=10;
    b=1;
}
void Complex ::printNumber(void){
    cout<<a<<" + i"<<b<<endl;
}
int main(){
    Complex o;
    o.printNumber();
return 0;
}