#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";cin>>num;
    int sum=0;
    int org=num;
    if(num<0) num*=-1;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    cout<<"The sum of digits of "<<org<<" is "<<sum;
}
