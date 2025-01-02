#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int minel(vector<int> arr,int n){
    int low=0;
    int high=n-1;
    int mini=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[high]){
            mini=min(mini,arr[low]);
            break;
        }
        if(arr[low]<=arr[mid]){
            mini=min(mini,arr[low]);
            low=mid+1;
        }
        else{
            mini=min(mini,arr[mid]);
            high=mid-1;
        }
    }
    return mini;
}

int main(){
    // minimum element in a rotated sorted array
    vector<int> myarr={7,8,9,1,2,3,4,5,6};
    cout<<minel(myarr,9)<<endl;
}