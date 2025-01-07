#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> sumMini(vector<int> arr){
    int sum=0;
    int mini=INT_MAX;
    int n=arr.size();
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mini=min(mini,arr[i]);
    }
    vector<int> ans={sum,mini};
    return ans;
}

int checkDays(vector<int> arr,int limit){
    int n=arr.size();
    int days=1;
    int load=0;
    for(int i=0;i<n;i++){
        if(load+arr[i]>limit){
            days++;
            load=arr[i];
        }
        else load+=arr[i];
    }
    return days;
}
int brute(vector<int> arr,int day){
    int n=arr.size();
    vector<int> summini=sumMini(arr);
    int sum=summini[0];
    int mini=summini[1];
    for(int i=mini;i<=sum;i++){
        if(checkDays(arr,i)<=day) return i;
    }
    return -1;   
}

int optimal(vector<int> arr,int day){
    int n=arr.size();
    vector<int> summini=sumMini(arr);
    int low = *max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(checkDays(arr,mid)<=day){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;

}
int main(){
    vector<int> weights ={1,2,3,4,5,6,7,8,9,10};
    int day=5;


    cout<<"brute "<<brute(weights,day)<<endl;
    cout<<"optimal "<<optimal(weights,day)<<endl;
}