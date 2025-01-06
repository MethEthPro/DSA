#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int brute(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        if(i*i<=n){
            ans=i;
        }
        else{
            break;
        }
    }
    return ans;
}


int optimal(int n){
    int low=1;
    int high=n;
    int ans=1;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return ans;

    // return high would also give the same result
}

int main(){
    // square root of a number or
    // return maximum number such that its square is less than the guven number 

    int num=28;

    cout<<"brute "<<brute(num)<<endl;
    cout<<"optimal "<<optimal(num)<<endl;
}