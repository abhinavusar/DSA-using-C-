#include<iostream>
using namespace std;
int main(){
    int min1=(int)'a';int max1=(int)'z';
    int min2=(int)'A';int max2=(int)'Z';
    for(min1;min1<=max1;min1++){
        cout<<"Character:"<<(char)min1<<" ASCII:"<<min1<<endl;
    }
    for(min2;min2<=max2;min2++){
        cout<<"Character:"<<(char)min2<<" ASCII:"<<min2<<endl;
    }
}
