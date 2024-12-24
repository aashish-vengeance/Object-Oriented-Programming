#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Employee{
    public:
    int id;
    int salary;
    Employee(){}
    Employee(int ok){
        id=ok;
        salary=34;
    }
};
/*
Derived class syntax
class {{derived-class-name}}: {{visibility-mode}} {{base-class-name}}
Note:
1. Default visibility mode is private
2. Private visibility mode: Public members of the base class becomnes Private members of the derived class
3. Public visibility mode : Public members of the base class becomes Public members of the derived class
4. Private members of the base class will never be inherited in the derived class
*/
class Programmer : Employee{
    // here by default visibility mode is private
    public:
    Programmer(){}
    Programmer(int op){
        id=op;
        salary=999;
    }
    void display(){
        cout<<"ID is "<<id<<endl;
        cout<<"Salary is "<<salary<<endl;
    }
    int languageCode=9;
};
int main(){
    Employee ash(5);
    Programmer oj(45);
    oj.display();

return 0;
}