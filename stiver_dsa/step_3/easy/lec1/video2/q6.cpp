#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void optimalINTERSECTION(int arr1[],int n1,int arr2[],int n2){
    int i =0;
    int j=0;
    vector<int> ans;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;

        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;

        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

void bruteINTERSECTION(int arr1[],int n1,int arr2[],int n2){
    int visited[n2]={0};
    vector<int> ans;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j] && visited[j]==0){
                ans.push_back(arr1[i]);
                visited[j]=1;
                break;
            }
            if(arr1[i]<arr2[j]){
                break;
            }

        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    cout<<"PROGRAM TO FIND INTERSECTION OF TWO ARRAYS"<<endl;
    int A[8]={1,2,2,3,3,4,5,6};
    int B[7]={2,3,3,5,6,6,7};
    bruteINTERSECTION(A,8,B,7);
    cout<<endl;
    optimalINTERSECTION(A,8,B,7);

}