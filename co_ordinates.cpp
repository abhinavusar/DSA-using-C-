#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter X cordinate:";cin>>x;
    cout<<"Enter Y cordinate:";cin>>y;
    if(x==0){
        if(y==0) cout<<"Origin";
        else if(y>0) cout<<"positive y axis";
        else cout<<"negative y axis";
    }
    else if(x<0){
        if(y==0) cout<<"negative x axis";
        else if(y>0) cout<<"2 nd quadrant";
        else cout<<"3 rd quadrant";
    }
    else{
        if(y==0) cout<<"positive x axis";
        else if(y>0) cout<<"1 st quadrant";
        else cout<<"4 th quadrant";
    }
}
