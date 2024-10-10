#include<iostream>
using namespace std;



int main(){
    cout<<"PROGRAM TO CHECK IF THE ARRAY IS SORTED"<<endl;

    int n;
    cout<<"enter the size of your array"<<endl;
    cin>>n;
    int my_arr[n];
    cout<<"enter your elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>my_arr[i];
    }
    int flag = 1;
    for(int i=1;i<n;i++){
        if (my_arr[i-1]<=my_arr[i]){
            
        }
        else{
            cout<<"not sorted"<<endl;
            flag = 0;
            break;
        }
    }
    if(flag==1){
        cout<<"sorted"<<endl;
    }

}