#include<iostream>
using namespace std;
void alternateswap(int arr[],int size){
    int a;

    for(int i=0;i<size-1;i=i+2){
        a=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=a;
        

    }
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"enter the size of your array"<<endl;
    cin>>size;
    int myarray[100];
    for (int i=0;i<size;i++){
        cin>>myarray[i];
    }
    alternateswap(myarray,size);
    

}
