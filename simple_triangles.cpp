#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows:";cin>>n;
  
    //star triangle
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
  
    //number triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
  
    //letter triangle
    for(int i=1;i<=n;i++){
        for(int j=(int)'A';j<((int)'A'+i);j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}
