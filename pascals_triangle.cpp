//Pascal's triangle
#include<iostream>
using namespace std;

int fact(int n){
    if(n==1 || n==0) return 1;
    else return (n*fact(n-1));
}
int C(int i,int j){
    return (fact(i)/(fact(j)*fact(i-j)));
}

int main(){
    int row;
    cout<<"Number of rows:";cin>>row;
    for(int i=0;i<row;i++){
        for(int k=1;k<row-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<C(i,j)<<" ";
        }
        cout<<endl;
    }
}
