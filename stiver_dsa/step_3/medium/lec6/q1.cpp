#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int method(int arr[],int n){

    int mini=arr[0];
    int profit=0;
    for(int i=1;i<n;i++){
        int sp=arr[i];
        profit=max(profit,sp-mini);
        mini=min(mini,arr[i]);
    }
    return profit;
}

int main(){
        // best time to buy and sell stock
    int my_arr[6]={7,1,5,3,6,4};

    int my_profit=method(my_arr,6);
    cout<<"max profit is "<<my_profit<<endl;
}