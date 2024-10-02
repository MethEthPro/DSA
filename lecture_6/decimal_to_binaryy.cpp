#include<iostream>
#include<math.h>
using namespace std ;
int main(){
    int n;
    cout<<"enter your binary number "<<endl;
    cin >> n ;
    float ans =0 ;
    int i =0 ;
    /*for 4 ,binary representation is 0000010, so if we start taking out bits
    by the formula bit = num &1 ; we would first get 0 , then 1, then 0000
    so we got 0,1,0,000
    we would need to reverse the digits so we use the formula 
    ans = (bit*pow(10,i))+ans*/

    
    while (n!=0){
        float bit = n & 1;
        
        
        ans=(bit*pow(10,i))+ans ; 
        
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
}