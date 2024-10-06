#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    string post;
    void setData();
    void getData();
};
void Employee :: setData(){
    
    cin>>name;
    
    cin>>salary;
   
    cin>>post;
    
}
void Employee ::getData(){
cout<<"Name is"<<name<<endl;
 cout<<"Salary is"<<salary<<endl;
 cout<<"Designation is "<<post<<endl;
}

int main(){

    return 0;
}