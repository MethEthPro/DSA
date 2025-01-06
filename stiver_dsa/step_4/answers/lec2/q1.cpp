#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int pow(int num,int n,int m){
    // lets say n=10
    // and num=10^5 
    // then to calculate num ^ n will cause overflow
    // so we go from num^1 to num^n and if at any time the value
    // exceeds the number whose root we are finding (m) we just stop there
    // and return 2 , thats like saying give me a smaller num 
    // this saves us from overflow

    // if num^n == m we return 1
    // else we return 0 . i.e like saying num^n < m , give me a bigger num

    int value=1;
    for(int i=1;i<=n;i++){
        value=value*num;
        if(value>m) return 2;

    }
    if(value==m) return 1;
    return 0;
}


int brute(int n,int m){
    for(int i=1;i<=m;i++){
        int value=pow(i,n,m);
        if(value==1) return i;
        
        else if(value==2){
            break;
        }
    }
    return -1;
}


int optimal(int n,int m){
    int low=1;
    int high=m;
    int ans=1;
    while(low<=high){
        int mid=(low+high)/2;
        int value=pow(mid,n,m);
        if(value==1){
            return mid;
        }
        else if(value==0) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main(){

    // find nth root of a number m
    // if it exists ,return it , else -1
    // its basically like saying x^n = m 

    int n=3;
    int m=28;

    cout<<"brute "<<brute(n,m)<<endl;
    cout<<"optimal "<<optimal(n,m)<<endl;


}