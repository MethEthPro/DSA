#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool brute_both(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j];
            if(sum==k){
                return true;
                // return (i,j)

            }
        }
    }
    return false;

}


bool better_both(int arr[],int n, int k){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int b=k-a;
        if(mpp.find(b)!=mpp.end()){
            return true;
            // return {i,mpp[b]}
        }
        mpp[a]=i;
    }
    return false;
}

bool optimal_yes_no(vector<int> arr,int k){
    int n = arr.size();
    int left=0;
    int right=n-1;
    sort(arr.begin(),arr.end());
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum==k){
            return true;
        }
        else if(sum<k){
            left++;
        }
        else{
            right--;
        }

    }
    return false;
    

}

int main(){
    // 2 sum problem 

    // brute
    int my_arr[5]={2,6,5,8,11};
    vector<int> arr={2,6,5,8,11};
    int k =14;
    cout<<brute_both(my_arr,5,k)<<endl;
    cout<<better_both(my_arr,5,k)<<endl;
    cout<<optimal_yes_no(arr,k)<<endl;
}