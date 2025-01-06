#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxel(vector<int> arr){
    int n=arr.size();
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

// n is the rate , i.e n bananas per hour
int timeEAT(vector<int> arr,int hourly){
    int n=arr.size();
    int time=0;
    for(int i=0;i<n;i++){
        time+=ceil(double(arr[i])/double(hourly));
    }
    return time;
}


int brute(vector<int> arr,int h){
    int max=maxel(arr);
    int ans=1;
    for(int i=1;i<=max;i++){
        int time=timeEAT(arr,i);
        if(time<=h) return i;
    }
    return -1;
}



int optimal(vector<int> arr,int h){
    int low=1;
    int high=maxel(arr);
    while(low<=high){
        int mid=(low+high)/2;
        int time=timeEAT(arr,mid);
        if(time<=h){
            // try to get a more minimum value
            high=mid-1;
        }
        else{
            // eating too slow , increase your eating speed
            low=mid+1;
        }
    }
    return low;
}
int main(){
    vector<int> arr={3,6,2,8};
    int h=7;

    cout<<"brute "<<brute(arr,h)<<endl;
    cout<<"optimal "<<optimal(arr,h)<<endl;

}