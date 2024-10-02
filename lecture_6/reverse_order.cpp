#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number"<<endl;
    cin>>n;
    int org = n;
    float ans = 0;
    float digit = 0;
    while (n!=0){
        digit = n%10;
        ans = (ans *10) + digit;
        n = n/10;
    }
    
    cout<<"the original num was"<<org<<endl<<"the final ans is"<<ans<<endl;
}