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

void better(vector<int> arr){
    next_permutation(arr.begin(),arr.end());
    printarray(arr);

}


void optimal(vector<int> arr){
    int ind=-1;
    int n=arr.size();
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(arr.begin(),arr.end());
    }
    else{
        for(int i=n-1;i>ind;i--){
            if(arr[i]>arr[ind]){
                swap(arr[i],arr[ind]);
                break;
            }
        }
        reverse(arr.begin()+ind+1,arr.end());
    }
    printarray(arr);
}
int main(){
    // NEXT PERMUTATION
    vector<int> myarr={2,1,5,4,3,0,0};
    vector<int> myarr2={3,2,1};

    // brute
    // watch 12/13 video from recursion playlist 
    // not important , get all permutation , sort them , do a linear search and get the next one


    // better 
    better(myarr);

    // optimal
    optimal(myarr);
}
