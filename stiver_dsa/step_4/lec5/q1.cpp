#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int rotate2(vector<int> arr,int n,int k){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            return 1;
        }
        if(arr[low]==arr[mid]&&arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=k && k<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> myarr={3,3,3,1,2,3};

    cout<<rotate2(myarr,6,3)<<endl;
    cout<<rotate2(myarr,6,4)<<endl;
}