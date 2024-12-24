#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Class Student is virtual base class
class Student{
    protected:
    int rollNo;
    public:
    void setData(int a);
    void getData();
};
void Student::setData(int a){
    rollNo=a;
}
void Student::getData(){
    cout<<"The roll number is : "<<rollNo<<endl;
}
class Marks :virtual public Student{
    protected:
    float maths,physics;
    public:
    void setMarks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void getMarks(void){
        cout<<"Marks obtained in maths is :"<<maths<<endl;
        cout<<"Marks obtained in physics is :"<<physics<<endl;
    }
};
class Score:virtual public Student{
    protected:
    int score;
    public:
    void setScore(int sc){
        score=sc;
    }
    void getScore(){
        cout<<"Score is : "<<score<<endl;
    }
};
class Result :public Marks,public Score{
    private:
    float total;
    public:
    void display(){
        total=maths+physics+score;
        getData();
        getMarks();
        getScore();
        cout<<"The total marks obtained is :"<<total<<endl;
    }
};
int main(){
    Result aashish;
    aashish.setData(007);
    aashish.setMarks(99.2,99.8);
    aashish.setScore(119);
    aashish.display();
return 0;
}