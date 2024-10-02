#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter your numner"<<endl;
    cin>>n;
    int org = n;
    float ans = 0;
    int digit = 0;
    int i = 0;
    while(n!=0){
        digit = n %10;
        ans = (digit*pow(10,i)) + ans;
        i++;
        n = n/10;

    }
    cout<<"the original number was "<<org<<endl<<"the final ans is "<<ans<<endl;
}