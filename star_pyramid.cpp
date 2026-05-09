#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Number of rows:";cin>>row;
    for(int i=0;i<row;i++){
        for(int j=1;j<(row-i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=(2*i+1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
