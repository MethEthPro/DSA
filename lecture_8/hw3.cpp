#include<iostream>
using namespace std;
int fib(int n);
int main(){
    int x;
    cout<<"enter the value of n"<<endl;
    cin>>x;
    cout<<fib(x)<<endl;

}
int fib (int n){
    
    int first_no=0;
    int second_no=1;
    int new_num;
    for (int c=1;c<=n-2;c++){
        int new_num;
        new_num=first_no+second_no;
        first_no=second_no;
        second_no=new_num;
        

    }
    
    return second_no;
}