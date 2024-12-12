// creating maps 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int my_arr[7]={1,2,3,14,15,14,2};
    map<long long , int > mpp;
    for(int i=0;i<7;i++){
        mpp[my_arr[i]]++;
    }
    int maxfreq=0;
    int maxelement=INT_MIN;
    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
        if(it.second>=maxfreq){
            maxfreq=it.second;
            maxelement=it.first;
        }
        // this is how elements are stored in the map
    }

    cout<<"element "<<maxelement<<" has the max freq of "<<maxfreq<<endl;

    cout<<mpp[15]<<endl;
    cout<<mpp[2]<<endl;
    cout<<mpp[1]<<endl;
}