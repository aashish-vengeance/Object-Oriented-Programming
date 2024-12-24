#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Num{
    public:
      int static  count;
    Num(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~Num(){
        cout<<"This is the time when destructor is called for object number "<<count<<endl;
        count--;
    }
};
int Num::count=0;
int main(){
    cout<<"Inside main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    Num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating two more objects"<<endl;
        Num n2,n3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to main function"<<endl;
return 0;
}