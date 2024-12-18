#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int brute(vector<int> arr,int k){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}

int optimal(vector<int> arr,int k){
    unordered_map<int,int> mpp;
    int n=arr.size();
    int count=0;
    int presum=0;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        int rem=presum-k;
        count+=mpp[rem];
        mpp[presum]++;
    }
    return count;
}

int main(){

    // no of subarrays with sum k
    vector<int> nums={1,2,3};
    int k=3;


    // brute
    int bruteANS=brute(nums,k);
    cout<<"brute "<<bruteANS<<endl;

    // optimal
    int optimalANS=optimal(nums,k);
    cout<<"optimal "<<optimalANS<<endl;
}