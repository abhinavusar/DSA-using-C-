//swap without third variable
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter value of a:";cin>>a;
    cout<<"Enter value of b:";cin>>b;
    a=a+b; b=a-b; a=a-b;
    cout<<"Original value of a:"<<b<<"  New Value of a:"<<a;
    cout<<"\nOriginal value of b:"<<a<<"  New Value of b:"<<b;
}
