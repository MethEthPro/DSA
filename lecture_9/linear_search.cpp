#include<iostream>
using namespace std;
bool search(int arr[],int size,int key);

int main(){
    int myarray[5]={2,3,4,-12,1322};
    int key;
    cout<<"enter the key to search for "<<endl;
    cin>>key;
    if (search(myarray,5,key)){
        cout<<"the element is present in the array";

    }
    else{
        cout<<"the array is not present in the key";
    }

}
bool search(int arr[],int size,int key){
    for (int i=0;i<size;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;

}