#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int brute(vector<int> arr,int n){
    if(arr[0]>arr[1]){
        return arr[0];
    }
    if(arr[n-1]>arr[n-2]){
        return arr[1];
    }
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}


int optimal(vector<int> arr, int n){
    if(n==1){
        return arr[0];
    }
    if(arr[0]>arr[1]){
        // first element is peak
        return arr[0];
    }
    if(arr[n-1]>arr[n-2]){
        // last element is peak
        return arr[n-1];
    }

    int low=1;
    int high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        if(arr[mid-1]<arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){

    // find peak element 
    vector<int> myarr={1,2,1,3,5,6,4};


    cout<<"brute "<<brute(myarr,7)<<endl;
    cout<<"optimal "<<optimal(myarr,7)<<endl;

}