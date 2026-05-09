#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter number of rows:";cin>>row;
    cout<<"Enter number of columns:";cin>>col;
    for(int i=0;i<row;i++){
        for(int j=(int)'A';j<((int)'A'+col);j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}
