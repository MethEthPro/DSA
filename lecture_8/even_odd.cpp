#include<iostream>
using namespace std;
bool isEVEN(int num){
    if(num&1){
        return 0;

    }
    else{
        return 1;
    }

}
int main(){
    int a;
    cin>>a;
    if(isEVEN(a)==0){
        cout<<"the number is odd"<<endl;

    }
    else{
        cout<<"the number is even"<<endl;
    }
}