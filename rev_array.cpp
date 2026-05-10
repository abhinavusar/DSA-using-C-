#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of elements:";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element at position "<<i+1<<":";cin>>arr[i];
    }
    cout<<"Original Array:[ ";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<"]\n";
    
    
    for(int i=0;i<(n/2);i++){
        arr[i]=arr[i]+arr[n-i-1];
        arr[n-i-1]=arr[i]-arr[n-i-1];
        arr[i]=arr[i]-arr[n-i-1];
    }
    
    cout<<"Reverse  Array:[ ";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<"]\n";
    
}
