#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Number of rows:";cin>>row;
    for(int i=0;i<row;i++){
        if(i==(row/2)){
            for(int j=0;j<row;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else{
            for(int j=0;j<(row/2);j++){
                cout<<"  ";
            }
            cout<<"* "<<endl;
        }
    }
}
