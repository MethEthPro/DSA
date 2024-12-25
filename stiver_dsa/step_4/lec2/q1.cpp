#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int lowerb(vector<int> arr,int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}


int upperb(vector<int> arr,int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}


int main(){   
    // lower and upper bound  

    vector<int> myarr={1,2,5,8,13,13,15,17,21,24};

    
    int cpplower=lower_bound(myarr.begin(),myarr.end(),13)-myarr.begin();
    cout<<"lower bound using inbuilt function "<<cpplower<<endl;

    int lower=lowerb(myarr,13);
    cout<<"lower bound "<<lower<<endl;

    int cppupper=upper_bound(myarr.begin(),myarr.end(),13)-myarr.begin();
    cout<<"upper bound using inbuilt function "<<cppupper<<endl;

    int upper=upperb(myarr,13);
    cout<<"upper bound "<<upper<<endl;

}