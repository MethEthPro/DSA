#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int brute(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>(n/2)){
            return arr[i];
        }
    }
    return -1;
}

int better(vector<int> arr){
    int n=arr.size();
    int m=n/2;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(m<mpp[arr[i]]){
           return arr[i];
        }
    }
    return -1;

}

int optimal(vector<int> arr){
    int cnt=0;
    int n=arr.size();
    int el=-1;
    for(int i=0;i<n;i++){
        if(cnt==0){
            el=arr[i];
        }
        else if(el==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            count++;
        }
    }
    if(count>n/2){
        return el;
    }
    return -1;
}
int main(){
    vector<int> my_arr={2,2,3,3,1,2,2};


    int majority_brute = better(my_arr);
    cout<<"brute "<<majority_brute<<endl;

    int majority_better = better(my_arr);
    cout<<"better "<<majority_better<<endl;

    int majority_optimal = optimal(my_arr);
    cout<<"optimal "<<majority_optimal<<endl;
}