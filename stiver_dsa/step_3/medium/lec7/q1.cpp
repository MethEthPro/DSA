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
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }

    for(int i=0;i<n/2;i++){
        arr[2*i]=pos[i];
        arr[(2*i)+1]=neg[i];
    }
    printarray(arr);
}

void optimal(vector<int> arr){
    int n=arr.size();
    int pos=0;
    int neg=1;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[pos]=arr[i];
            pos+=2;
        }
        else{
            ans[neg]=arr[i];
            neg+=2;
        }
    }
    printarray(ans);
}


void unEqual(vector<int> arr){
    int n=arr.size();
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }

    // more positive elements
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            arr[2*i]=pos[i];
            arr[(2*i)+1]=neg[i];
        }
        int index=2*neg.size();
        for(int i=neg.size();i<pos.size();i++){
            arr[index]=pos[i];
            index++;
        }
    }

    // more negative elments
    else{
        
        for(int i=0;i<pos.size();i++){
            arr[2*i]=pos[i];
            arr[(2*i)+1]=neg[i];
        }
        int index=2*pos.size();
        for(int i=pos.size();i<neg.size();i++){
            arr[index]=neg[i];
            index++;
        }

    }
    printarray(arr);
}
int main(){
    // rearrange elements by sign

    // case-1 
    // pos and neg elements are equal
    vector<int> my_equal_array={3,1,-2,-5,2,-4};
    brute(my_equal_array);
    optimal(my_equal_array);

    // case-2
    // pos and neg elements are not equal
    vector<int> my_unequal_array={-1,2,3,4,-3,1};
    unEqual(my_unequal_array);
}