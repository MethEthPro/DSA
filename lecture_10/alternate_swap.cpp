#include<iostream>
using namespace std;
void alternateswap(int arr[],int size){
    
    for(int i=0;i<size-1;i=i+2){
        swap(arr[i],arr[i+1]);

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