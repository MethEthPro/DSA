#include<iostream>
using namespace std;


int iterative(int arr[],int target,int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;

}


int recursive(int arr[],int low,int high,int target){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(target>arr[mid]){
        return recursive(arr,mid+1,high,target);
    }
    return recursive(arr,low,mid-1,target);
}
int main(){
    // BINARY SEARCH


    int myarr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // iterative
    int iterative_ans=iterative(myarr,7,9);
    cout<<"ITERATIVE "<<iterative_ans<<endl;

    // recursive

    int recursive_ans=recursive(myarr,0,8,7);
    cout<<"RECURSIVE "<<recursive_ans<<endl;



}