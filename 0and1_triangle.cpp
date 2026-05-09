#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Number of rows:";cin>>row;
    for(int i=0;i<row;i++){
        bool flag=(i%2==0)?false:true;
        for(int j=0;j<=i;j++){
            cout<<(int)flag<<" ";
            flag=(!flag);
        }
        cout<<endl;
    }
}
