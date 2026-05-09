#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";cin>>num;
    int org=num;
    if(num<0) num*=-1;
    int count=0;
    if(num==0) cout<<"Number of digits in 0 is 1";
    else{
        while(num>0){
            num/=10;
            count++
        }
        cout<<"Number of digits in "<<org<<" is "<<count:
    }
    
}
