#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void optimal(int arr[],int n){
    int ansStart=-1;
    int ansEnd=-1;
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){

        if(sum==0){
            ansStart=i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansEnd=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<ansStart<<" "<<ansEnd<<endl;
}

int main(){
    // getting indexes of subarray that gives max sum
    int my_arr[8]={-2,-3,4,-1,-2,1,5,-3};

    optimal(my_arr,8);
}