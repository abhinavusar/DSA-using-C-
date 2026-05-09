#include<iostream>
using namespace std;
int main(){
    int num,org,rev;
    cout<<"Enter a number:";cin>>num;
    org=num;rev=0;
    if(num<10) num*=-1;
    while(num>0){
        rev=((rev*10)+(num%10));
        num/=10;
    }
    if(org<0) cout<<"Original:"<<org<<" Reverse:"<<-1*rev;
    else cout<<"Original:"<<org<<" Reverse:"<<rev;
}
