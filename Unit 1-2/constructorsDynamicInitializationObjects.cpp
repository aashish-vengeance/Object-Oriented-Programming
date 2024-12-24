#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class BankDeposit{
    int principal;
    int years;
    int returnVal;
    float rate;
    public:
    BankDeposit(){}
    BankDeposit(int p,int y,float r);
    BankDeposit(int p,int y,int r);
    void printVal();
};
BankDeposit ::BankDeposit(int p,int y,float r){
    principal=p;
    years=y;
    rate=r;
    returnVal=principal;
    for(int i=0;i<y;i++){
        returnVal= returnVal*(1+r);
    }
}
BankDeposit ::BankDeposit(int p,int y,int r){
    principal=p;
    years=y;
    rate=float(r)/100;
    returnVal=principal;
    for(int i=0;i<y;i++){
        returnVal= returnVal*(1+rate);
    }
}
void BankDeposit ::printVal(){
    cout<<"Principal value is "<<principal<<" deposited for duration of "<<years<<" year and the return Value is:"<<returnVal<<endl;
}
int main(){
    BankDeposit bd1,bd2;
    int p,y;
    float r;
    int R;
    cout<<"Enter the values of p ,y ,r"<<endl;
    cin>>p>>y>>r;
    bd1=BankDeposit(p,y,r);
    bd1.printVal();
    cout<<"Enter the values of p ,y ,R"<<endl;
    cin>>p>>y>>R;
    bd2=BankDeposit(p,y,R);
    bd2.printVal();

return 0;
}
