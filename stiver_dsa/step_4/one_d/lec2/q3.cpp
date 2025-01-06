#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int floor(vector<int> arr,int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int myfloor=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=x){
            myfloor=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return arr[myfloor];
}


int ceil(vector<int> arr,int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int myceil=-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            myceil=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return arr[myceil];
    
}

int main(){
    // floor and ceil in sorted array
    // ceil is arr[index]>=x so same as lower bound
    // floor is arr[index]<=x

    // if no floor or ceil is found we can return -1 as the index

    vector<int> myarr={10,20,30,40,50};

    int myfloor=floor(myarr,25);
    int myceil=ceil(myarr,25);
    cout<<"floor "<<myfloor<<endl;
    cout<<"ceil "<<myceil<<endl;
}