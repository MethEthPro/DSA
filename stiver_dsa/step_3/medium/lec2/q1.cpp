#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void better(int arr[],int n){
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    vector<int> new_arr(n,0);
    // getting count of 0 1 and 2
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt0++;
        }
        else if(arr[i]==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    // setting elements 
    for(int i=0;i<cnt0;i++){
        new_arr[i]=0;
    }
    for(int i=cnt0;i<cnt0+cnt1;i++){
        new_arr[i]=1;
    }
    for(int i=cnt0+cnt1;i<n;i++){
        new_arr[i]=2;
    }


    // printing the new array
    for(int i=0;i<n;i++){
        cout<<new_arr[i]<<" ";
    }
    cout<<endl;
    // here we created a new array ,
    // as we have to use our original array in 
    // another function 
    // so its correct space complexity is O(1)
    // and time complexity is O(2N)
    // if we dont include the printing par
    
    
}

void optimal(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if (arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    // sort 0's , 1's and 2's
    int my_arr[12]={0,1,2,0,1,2,1,2,0,0,0,1};

    // brute 
    // just use any sorting algorithm 


    // better
    better(my_arr,12);


    // optimal
    optimal(my_arr,12);

    // printing the array after optimal
    for(int i=0;i<12;i++){
        cout<<my_arr[i]<<" ";
    }
    cout<<endl;
}