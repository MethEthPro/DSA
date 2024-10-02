#include<iostream>
using namespace std;
int ap(int num);
int main(){
    int n;
    cin>>n;
    cout<<"the nth term is "<<ap(n);


    }
int ap (int num){
    //AP nth term is 3*num+7
    int term = (3*num )+7;
    return term;
    




}   
