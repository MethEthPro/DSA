#include<iostream>
#include<bits/stdc++.h>
using namespace std;




int firstOcc(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return first;
}

int lastOcc(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return last;
}

int count(int arr[],int n,int x){
    int first = firstOcc(arr,n,x);
    if(first==-1){
        return 0;
    }
    int last=lastOcc(arr,n,x);
    return last-first+1;
}

int main(){
    int myarr[8]={1,2,4,8,8,8,11,14};


    int ans1=count(myarr,8,8);
    int ans2=count(myarr,8,11);
    int ans3=count(myarr,8,10);

    cout<<"8 occurs "<<ans1<<" times"<<endl;
    cout<<"11 occurs "<<ans2<<" times"<<endl;
    cout<<"10 occurs "<<ans3<<" times"<<endl;
    
}
