#include<iostream>
using namespace std;
void reversearray(int array[],int size){
    int start=0;
    int end =size-1;
    
    while(start<=end){
        swap(array[start],array[end]);
        start++;
        end--;

    }

}
void printarray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        

    }
}
int main(){
    int array[6]={1,2,3,4,5,10};
    int brray[4]={12,24,23,44};
    reversearray(array,6);
    reversearray(brray,4);
    printarray(array,6);
    printarray(brray,4);
}