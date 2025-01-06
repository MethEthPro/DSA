#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int brute(vector<int> arr,int n){
    if(n==1){
        return arr[0];
    }
    if(arr[0]!=arr[1]){
        return arr[0];
    }
    if(arr[n-1]!=arr[n-2]){
        return arr[n-1];
    }
    for(int i=1;i<n-1;i++){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            return arr[i];
        }
    }
    return -1;



}

int better(vector<int> arr,int n){
    int x=0;
    for(int i=0;i<n;i++){
        x=x^arr[i];
    }
    return x;

}

int optimal(vector<int> arr,int n){
    if(n==1){
        return arr[0];
    }
    if(arr[0]!=arr[1]){
        return arr[1];
    }
    if(arr[n-1]!=arr[n-2]){
        return arr[n-1];
    }
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        if((mid%2==1 && arr[mid-1]==arr[mid]) || (mid%2==0 && arr[mid]==arr[mid+1])){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    // single element in a sorted array , where each element is repeated twice
    // except once

    vector<int> myarr={1,1,2,2,3,3,4,5,5,6,6};

    cout<<"brute "<<brute(myarr,11)<<endl;
    cout<<"better "<<better(myarr,11)<<endl;
    cout<<"optimal "<<optimal(myarr,11)<<endl;
}