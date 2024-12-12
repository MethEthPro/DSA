#include<iostream>
using namespace std;


int main(){

    cout<<"PROGRAM TO FIND DUPLICATES IN AN ARRAY"<<endl;
    
    int n;
    cout<<"enter the size of your array"<<endl;
    cin>>n;
    int my_arr[n];
    cout<<"enter your elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>my_arr[i];
    }

    int i = 0;
    for(int j=1;j<n;j++){
        if(my_arr[i]!=my_arr[j]){
            my_arr[i+1] = my_arr[j];
            i++;
        }
    }

    cout<<i+1<<" "<<"distinct elements"<<endl;
}
