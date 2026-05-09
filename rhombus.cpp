//star cross
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Number of rows:";cin>>row;
    for(int i=0;i<row;i++){
        for(int j=1;j<(row-i);j++){
            cout<<"  ";
        }
        for(int k=0;k<row;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
