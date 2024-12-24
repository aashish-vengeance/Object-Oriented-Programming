#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
     void setId(void){
        cout<<"Enter id: "<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The id of the employee is "<<id<<endl;
    }
    
};
int main(){
    Employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setId();
    }
    for(int i=0;i<4;i++){
        fb[i].getId();
    }
return 0;
}