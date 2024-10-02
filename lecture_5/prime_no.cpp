#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter your number"<<endl;
    cin>>n;
    int is_prime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
            is_prime=0;
            break;

        }
        
    }
    if(is_prime==1){
        cout<<"prime"<<endl;
    }
}