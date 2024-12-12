#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr1[6]={1,1,2,3,4,7};
    int arr2[6]={2,3,4,4,5,6};
    // brute method 
    // set<int> st;
    // for(int i=0;i<6;i++){
    //     st.insert(arr1[i]);
    // }
    // for(int i=0;i<6;i++){
    //     st.insert(arr2[i]);
    // }
    // vector<int> temp;
    // for(auto it:st){
    //     temp.push_back(it);

    // }
    // for(int i=0;i<st.size();i++){
    //     cout<<temp[i]<<" ";
    // }


    // optimal method 
    int i = 0;
    int j = 0;
    vector<int> unionArr;

    while(i<6 && j<6){
        if(arr1[i]<=arr2[j]){
            if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
                
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;

        }
    }
    while(j<6){
        if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
        }
        j++;

    }
    while(i<6){
        if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
                
        }
        i++;

    }

    for(int i=0;i<unionArr.size();i++){
        cout<<unionArr[i]<<" ";
    }
    

}