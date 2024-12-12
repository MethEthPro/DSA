#include<iostream>
using namespace std;



int main(){
    cout<<"program to find the largest element in an array"<<endl;

    int n;
    cout<<"enter the size of your array"<<endl;
    cin>>n;
    int my_arr[n];
    cout<<"enter your elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>my_arr[i];
    }
    int largest = my_arr[0];

    for(int i=0;i<n;i++){
        if(my_arr[i]>largest){
            largest = my_arr[i];
        }
    }
    cout<<largest<<endl;

    
}