#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int myval(vector<int> arr,int div){
    int n=arr.size();
    int sums=0;
    for(int i=0;i<n;i++){
        sums+=ceil(double(arr[i])/double(div));
    }
    return sums;

}

int brute(vector<int> arr,int th){
    int n=arr.size();
    if(n>th) return -1;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    } 

    for(int i=1;i<=maxi;i++){
        if(myval(arr,i) <=th){
            return i;
        }
    }
    return -1;


}

int optimal(vector<int> arr,int th){
    int n=arr.size();
    if(n>th) return -1;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int low=1;
    int high=maxi;
    int ans=1;
    while(low<=high){
        int mid=(low+high)/2;
        if(myval(arr,mid)<=th){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int main(){
    vector<int> arr={1,2,5,9};
    int th=6;

    cout<<"brute "<<brute(arr,th)<<endl;
    cout<<"optimal "<<optimal(arr,th)<<endl;

}