#include<iostream>
using namespace std;
int sumofarray(int arr[],int n);
int main(){
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int myarray[100];
    for (int i=0;i<size;i++){
        cin>>myarray[i];
    }
    cout<<"sum is "<<sumofarray(myarray,size);
}
int sumofarray(int arr[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}