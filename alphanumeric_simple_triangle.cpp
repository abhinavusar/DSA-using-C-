#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows:";cin>>row;
    for(int i=1;i<=row;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=(int)'A';j<((int)'A'+i);j++){
                cout<<(char)j<<" ";
            }
            cout<<endl;
        }
    }
}
