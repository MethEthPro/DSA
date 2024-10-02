#include<iostream>
using namespace std;
int isprime(int n);
int main(){
    int num;
    cout<<"enter your number"<<endl;
    cin>>num;
    if (isprime(num)==0){
        cout<<"the number is not prime"<<endl;

    }
    else{
        cout<<"the number is prime"<<endl;
    }


}
int isprime(int n){
    for(int i=2;i<n;i++){
        if (n%i==0){
            return 0 ;

        }
    }
    return 1;
}