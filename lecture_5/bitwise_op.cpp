#include<iostream>
using namespace std;
int main (){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<(a|b)<<endl;
    cout<<(a&b)<<endl;
    if((a&1)==0){
        cout<<"even"<<endl;
    }
    else {
        cout<<"odd"<<endl;
    }
    }