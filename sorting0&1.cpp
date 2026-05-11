#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v={1,0,0,1,0,0,0,1,1,0,1,1,1,0,0,1,0,0,1,0};
    cout<<"Original Array:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i=0;int j=v.size()-1;
    while(i<j){
        if(v[i]==1 && v[j]==0){
            v[i]=v[i]+v[j];
            v[j]=v[i]-v[j];
            v[i]=v[i]-v[j];
            i++;j--;
        }
        if(v[i]==0) i++; if(v[j]==1) j--; 
    }
    cout<<"Sorted   Array:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
