#include<iostream>
using namespace std;
void printcounting(int n);
//this is called function declaration and void type indicates that the function is not returning any value
int main(){
    int num;
    cin>>num;
    printcounting(num);
    //this is function call
}
//this is function definition
void printcounting(int n){
    for(int i =1;i<=n;i++){
        cout<<i<<endl;
    }
}