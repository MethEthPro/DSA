#include<iostream>
using namespace std;
void swap_array(int array[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        while(array[i] == 0 && i<j){
            i++;
        }
        while(array[j]==1 && i<j){
            j--;
        }
        if (i<j){
            swap(array[i],array[j]);
        }
    }
}
void print_array(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        

    }
    cout<<"printing done"<<endl;
}
int main(){
    int my_array[100];
    int size;
    cout<<"enter size of the array"<<endl;
    cin>>size;
    for(int i = 0;i<size;i++){
        cin>>my_array[i];
    }

    swap_array(my_array,size);
    print_array(my_array,size);
}