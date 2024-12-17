#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printarray(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void brute(vector<int> arr){
    int n=arr.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        bool leader =true;
        for(int j=i;j<n;j++){
            if(arr[j]>arr[i]){
                leader=false;
            }
        }
        if(leader==true){
            ans.push_back(arr[i]);
        }
    }
    printarray(ans);

}

void optimal(vector<int> arr){
    int n=arr.size();
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi=arr[i];
        }
    }
    printarray(ans);
}


int main(){
    // LEADERS in an array
    vector<int> myarr={10,22,12,0,3,6};


    // brute
    brute(myarr);

    // optimal
    optimal(myarr); 
    // optimal gives us sorted array leaders
}