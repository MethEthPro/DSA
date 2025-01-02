#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int timesROT(vector<int> arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int index=-1;
    int min=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[high]){
            if(arr[low]<min){
                min=arr[low];
                index=low;
            }
            break;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<min){
                min=arr[low];
                index=low;
            }
            low=mid+1;
        }
        else{
            if(arr[mid]<min){
                min=arr[mid];
                index=mid;
            }
            high=mid-1;
        }
    }
    return index;
}

int main(){
    // number of times a rotated sorted array has been rotated 
    vector<int> myarr={7,8,9,1,2,3,4,5,6};

    cout<<timesROT(myarr)<<endl;
}