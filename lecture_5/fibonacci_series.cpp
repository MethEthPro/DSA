#include<iostream>
using namespace std;
int main (){
    int n;
    int c=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int first_no=0;
    int second_no=1;
    cout<<first_no<<" ";
    cout<<second_no<<" ";
    /*while(c<=n-2){
        
        int new_no=first_no+second_no;
        cout<<new_no<<" ";
        c=c+1;
        first_no=second_no;
        second_no=new_no;
    }*/
    for(int i =1;i<=n-2;i++){
        int new_no=first_no+second_no;
        cout<<new_no<<" ";
       
        first_no=second_no;
        second_no=new_no;
    }
}