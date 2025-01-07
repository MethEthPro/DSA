#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> maxmin(vector<int> arr){
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>maxi) maxi=arr[i];
        else if(arr[i]<mini) mini=arr[i];
    }
    vector<int> ans={maxi,mini};
    return ans;
}

bool isPossible(vector<int> arr, int m, int k,int days){
    int counter=0;
    int bqcount=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]<=days){
            counter++;
        }
        else{
            bqcount+=counter/k;
            counter=0;
        }
    }
    bqcount+=counter/k;
    if(bqcount>=m){
        return true;
    }
    return false;
}

int  brute(vector<int> arr,int m,int k){
    vector<int> maximini=maxmin(arr);
    int maxi=maximini[0];
    int mini=maximini[1];
    int n=arr.size();
    if(m*k>n){
        return -1;
    }
    for(int i=mini;i<=maxi;i++){
        if(isPossible(arr,m,k,i)) return i;
    }
    return -1;

}

int optimal(vector<int> arr,int m,int k){
    vector<int> maximini=maxmin(arr);
    int high=maximini[0];
    int low=maximini[1];
    int n=arr.size();
    int ans=high;
    if(m*k>n) return -1;
    while(low<=high){
        int mid=(low+high)/2;
        if(isPossible(arr,m,k,mid)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}


int main(){
    vector<int> bloom={7,7,7,7,13,11,12,7};
    int m=2;
    int k=3;
    cout<<"brute "<<brute(bloom,m,k)<<endl;
    cout<<"optimal "<<optimal(bloom,m,k)<<endl;

}