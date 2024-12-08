#include<iostream>
using namespace std;
int main(){
    cout<<"PROGRAM TO FIND THE NUMBER APPEARING ONCE"<<endl;
    int my_arr[7]={1,1,2,3,3,4,4};
    int Xor=0;
    for(int i=0;i<7;i++){
        Xor=Xor^my_arr[i];
    }
    cout<<Xor<<endl;
}