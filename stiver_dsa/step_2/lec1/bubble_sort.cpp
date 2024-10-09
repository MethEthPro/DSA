#include<iostream>
using namespace std;

void bubble_sort_descending(int arr[],int n){
    for(int i=n-1;i>0;i--){
        int swapp = 0;
        for(int j =0;j<i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapp=1;
            }
        }
        if (swapp==0){
            break;
        }
    }
}


void bubble_sort_ascending(int arr[],int n){
    for(int i=n-1;i>0;i--){
        int swapp = 0;
        for(int j =0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapp=1;
            }
        }
        if (swapp == 0){
            break;
        }
    }
}

void bubble_sort_ascending_recursion(int arr[],int n,int swaps=1){
    if ((n==1)||(swaps==0)) {
        return;
    }
    swaps = 0;
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swaps=1;
        }
    }
    bubble_sort_ascending_recursion(arr,n-1,swaps);
}


void bubble_sort_descending_recursion(int arr[],int n,int swaps=1){
    if ((n==1)||(swaps==0)) {
        return;
    }
    swaps = 0;
    for(int j=0;j<n-1;j++){
        if(arr[j]<arr[j+1]){
            swap(arr[j],arr[j+1]);
            swaps=1;
        }
    }
    bubble_sort_descending_recursion(arr,n-1,swaps);
}


int main(){
    int n;
    cout<<"enter length of your array"<<endl;
    cin>>n;
    int my_array[n];
    cout<<"enter your elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>my_array[i];
    }

    int choice;
    cout<<"1 for ascending , 0 for descending,-1 for ascending recursion,-2 for descending recursion"<<endl;
    cin>>choice;

    cout<<"array before sorting"<<endl;

    for(int i=0;i<n;i++){
        cout<<my_array[i]<<" ";
    }


    
    if(choice==1){
        bubble_sort_ascending(my_array,n);
    }

    else if(choice==0){
        bubble_sort_descending(my_array,n);
    }
    else if(choice==-1){
        bubble_sort_ascending_recursion(my_array,n);
    }
    else if(choice==-2){
        bubble_sort_descending_recursion(my_array,n);
    }
    


    cout<<endl;
    cout<<"array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<my_array[i]<<" ";
    }


}