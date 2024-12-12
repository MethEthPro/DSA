#include<iostream>
using namespace std;
int main(){
    int my_arr[6]={1,2,3,12,2,3};
    int my_hash[13]={0};
    for(int i=0;i<6;i++){
        my_hash[my_arr[i]]++;
    }
    cout<<my_hash[1]<<endl;
    cout<<my_hash[2]<<endl;
    cout<<my_hash[3]<<endl;
    cout<<my_hash[5]<<endl;
}