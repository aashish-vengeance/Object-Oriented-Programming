#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class ShopItem{
    int id;
    int price;
    public:
    void setData(int a,int b){
        id=a;
        price=b;
    }
    void getData(){
        cout<<"Code of this item is:"<<id<<endl;
        cout<<"Price of this item is:"<<price<<endl;
    }
};
int main(){
    int size=3;
    ShopItem * ptr= new ShopItem[size];
    ShopItem* ptrTemp=ptr;
    int p,q;
    for(int i=0;i<size;i++){
        cout<<"Enter id & price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(int i=0;i<size;i++){
        cout<<"Item no : "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
return 0;
}