#include<iostream>
using namespace std;

int main(){
    cout<<"PROGRAM TO LEFT ROTATE AN ARRAY BY ONE PLACE"<<endl;
    int n;
    cout<<"enter the size of your array"<<endl;
    cin>>n;
    int my_arr[n];
    cout<<"enter your array"<<endl;
    for(int i=0;i<n;i++){
        cin>>my_arr[i];
    }

    cout<<"printing array before any changes"<<endl;
    for(int i=0;i<n;i++){
        cout<<my_arr[i]<<" ";
    }
    cout<<endl;
    int temp = my_arr[0];
    for(int i=1;i<n;i++){
        my_arr[i-1]=my_arr[i];
    }
    my_arr[n-1]=temp;
    cout<<"printing array after left shifitng by one"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<my_arr[i]<<" ";
    }
    cout<<endl;
    

}