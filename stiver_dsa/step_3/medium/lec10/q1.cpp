#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool linSearch(vector<int> arr, int num){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return true;
        }
    }
    return false;
}

int brute(vector<int> arr){
    int n=arr.size();
    int longest=1;
    for(int i=0;i<n;i++){
        int x=arr[i];
        int count=1;
        while(linSearch(arr,x+1)==true){
            x=x+1;
            count=count+1;
        }
        longest=max(longest,count);
    }
    return longest;
}

int better(vector<int> arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int lastSMALL=INT_MIN;
    int longest=1;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]-1==lastSMALL){
            lastSMALL=arr[i];
            count++;
        }
        else if(arr[i]!=lastSMALL){
            count=1;
            lastSMALL=arr[i];
        }
        longest=max(longest,count);
    }
    return longest;
}

int optimal(vector<int> arr){
    int n=arr.size();
    int count=0;
    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int x=it;
            count=1;
            while(st.find(x+1)!=st.end()){
                count++;
                x=x+1;
            }
            longest=max(longest,count);
        }
        
    }
    return longest;
        
}

int main(){
    vector<int> myarr={102,4,100,101,100,1,2,2,3,1};


    // brute
    int ansbrute=brute(myarr);
    cout<<"brute "<<ansbrute<<endl;

    int ansbetter=better(myarr);
    cout<<"better "<<ansbetter<<endl;

    int ansoptimal=optimal(myarr);
    cout<<"optimal "<<ansoptimal<<endl;
}