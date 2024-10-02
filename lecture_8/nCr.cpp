#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int ncr(int n,int r){
    int num= fact(n);
    int denom=fact(r)*fact(n-r);
    int ans = num/denom ;
    return ans;
}
int main(){
    int n,r;
    cin>>n;
    cin>>r;
    cout<<"the answer is"<<ncr(n,r)<<endl;
}