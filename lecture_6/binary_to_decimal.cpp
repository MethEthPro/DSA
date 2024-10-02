#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"enter your number "<<endl;
    cin>>num;
    float ans=0;
    int i=0;
    /*
    here we would have input of some type like 10010, and we want the last digit
    not the bit , so we use n%10,
    */
    while(num!=0){
        int digit=num%10;
        if (digit==1){
            ans=ans+pow(2,i);

        }
        num=num/10;
        i++;
        


    }
    cout<<ans<<endl;
}