#include<iostream>
using namespace std;


void insertion_sort_descending(int arr[],int n){
    for(int i = 0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j]>arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

void insertion_sort_ascending(int arr[],int n){
    for(int i = 0;i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

void insertion_sort_ascending_recursion(int arr[],int n,int i=0){
    if(i==n){
        return;
    }
    int j = i;
    while(j>0 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
    insertion_sort_ascending_recursion(arr,n,i+1);
}

void insertion_sort_descending_recursion(int arr[],int n,int i=0){
    if(i==n){
        return;
    }
    int j = i;
    while(j>0 && arr[j]>arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
    insertion_sort_descending_recursion(arr,n,i+1);
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
    cout<<"1 for ascending , 0 for descending,-1 for ascending recursion, -2 for descending recursion"<<endl;
    cin>>choice;

    cout<<"array before sorting"<<endl;

    for(int i=0;i<n;i++){
        cout<<my_array[i]<<" ";
    }


    
    if(choice==1){
        insertion_sort_ascending(my_array,n);
    }

    else if(choice==0){
        insertion_sort_descending(my_array,n);
    }

    else if(choice==-1){
        insertion_sort_ascending_recursion(my_array,n);
    }
    else if(choice==-2){
        insertion_sort_descending_recursion(my_array,n);
    }
    cout<<endl;
    cout<<"array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<my_array[i]<<" ";
    }


}