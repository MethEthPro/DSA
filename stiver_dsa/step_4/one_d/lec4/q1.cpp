#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int rotated1(vector<int> arr,int n, int k){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            return mid;
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

    // search element in a rotated sorted array-1
    vector<int> myarr={7,8,9,1,2,3,4,5,6};

    cout<<rotated1(myarr,9,7)<<endl;
    

}