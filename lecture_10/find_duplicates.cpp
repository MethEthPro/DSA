#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,4,6,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int expsum=0;
    cout<<size<<endl;
    for (int i=1;i<size;i++){
        expsum=expsum+i;

    }
    int actsum=0;
    for (int i=0;i<size;i++){
        actsum=actsum+arr[i];

    }
    int diff= actsum-expsum;
    cout<<diff<<endl;
}