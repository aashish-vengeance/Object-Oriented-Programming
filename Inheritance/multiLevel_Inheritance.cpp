#include<iostream>
using namespace std;
class Student{
    protected:
    int rollNo;
    public:
    void setRollNo(int );
    void getRollNo();
};
void Student::setRollNo(int a){
    rollNo=a;
}
void Student ::getRollNo(){
    cout<<"The roll number is "<<rollNo<<endl;
}
class Marks :public Student{
    protected:
    float maths;
    float physics;
    public:
    void setMarks(float,float);
    void getmarks();
};
void Marks::setMarks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void Marks::getmarks(){
    cout<<"Marks obtained in maths are: "<<maths<<endl;
    cout<<"Marks obtained in physics are: "<<physics<<endl;
}
class result :public Marks{
    protected:
    float percentage;
    public:
    void display();
};
void result::display(){
    getRollNo();
    getmarks();
    cout<<"Your obtained percentage is = "<<(maths+physics)/2<<"%"<<endl;
}
int main(){
    result veng;
    veng.setRollNo(7);
    veng.setMarks(99.9,98.9);
    veng.display();
return 0;
}
