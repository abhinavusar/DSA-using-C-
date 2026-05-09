#include<iostream>
using namespace std;
int main(){
    int row;int num=1;
    cout<<"Number of rows:";cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}
