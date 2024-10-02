#include<iostream>
using namespace std;


void printName(string name, int start, int times){
    if (start>times){
        return;
    }
    cout<<name<<endl;
    printName(name,start+1,times);
    
}





int main(){
    // printing name , for n times
    int n;
    int i;
    string name;
    cin>>name;
    cin>>i;
    cin>>n;
    printName(name,i,n);


}