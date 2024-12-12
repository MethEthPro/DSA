#include<iostream>
using namespace std;




int main(){
    cout<<"PROGRAM TO FIND THE SECOND LARGEST ELEMENT IN THE ARRAY"<<endl;
    int n;
    cout<<"enter the size of your array"<<endl;
    cin>>n;
    int my_arr[n];
    cout<<"enter your elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>my_arr[i];
    }

    int largest = my_arr[0];
    int slargest = INT32_MIN;

    for(int i=0;i<n;i++){

        if(my_arr[i]>largest){
            slargest = largest;
            largest = my_arr[i];
        }
        else if(my_arr[i]<largest && my_arr[i]>slargest){
            slargest = my_arr[i];
        }
    }

    cout<<slargest<<endl;




}