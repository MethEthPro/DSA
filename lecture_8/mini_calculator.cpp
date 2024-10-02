#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ope;
    cout<<"enter your first number"<<endl;
    cin>>a;
    cout<<"enter your second number"<<endl;
    cin>>b;
    cout<<"enter your operation type : +,-,*,/,%"<<endl;
    cin>>ope;
    switch (ope){
        case '+': cout<<a+b<<endl;
                  break;
        case '-' : cout<<a-b<<endl;
                   
                   break;
        case '*': cout<<a*b<<endl;
                  break;
        case '/' : cout<<a/b<<endl;
                   
                   break;      
        case '%' : cout<<a%b<<endl;
                   
                   break;   
        default: cout<<"wrong operation provided"   <<endl;                           

    }
    }