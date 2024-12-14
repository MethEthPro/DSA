#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int brute(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(maxi,sum);
        }
    }
    return maxi;
}

int optimal(int arr[],int n){
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

int main(){
    // maximum subarray sum
    int my_arr[8]={-2,-3,4,-1,-2,1,5,-3};

    // brute
    int brute_sum=brute(my_arr,8);
    cout<<"brute "<<brute_sum<<endl;

    // optimal
    // kadanes algorithm
    int optimal_sum=optimal(my_arr,8);
    cout<<"optimal "<<optimal_sum<<endl;
}