#include<bits/stdc++.h>
using namespace std ;

void mergee_ascending(int arr[],int low,int mid,int high){
    int left_ptr = low;
    int right_ptr = mid + 1;
    int length = high - low +1;
    int temp[length];
    int i =0;
    while(left_ptr<=mid && right_ptr<=high){
        if (arr[left_ptr]<=arr[right_ptr]){
            temp[i] = arr[left_ptr];
            left_ptr++;   
        }
        else{
            temp[i] = arr[right_ptr];
            right_ptr++;
        }
        i++;
    }
    while(left_ptr <= mid){
        temp[i] = arr[left_ptr];
        left_ptr++;
        i++;
   }
    while(right_ptr <= high){
        temp[i] = arr[right_ptr];
        right_ptr++;
        i++;
    }
    for (int j = low;j<=high;j++){
        arr[j] = temp[j-low];
    }

}


void mergeSort_ascending(int arr[],int low,int high){

    // base condition
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort_ascending(arr,low,mid);
    mergeSort_ascending(arr,mid + 1,high);
    mergee_ascending(arr,low,mid,high);
    
}



void mergee_descending(int arr[],int low,int mid,int high){
    int left_ptr = low;
    int right_ptr = mid + 1;
    int length = high - low +1;
    int temp[length];
    int i =0;
    while(left_ptr<=mid && right_ptr<=high){
        if (arr[left_ptr]>=arr[right_ptr]){
            temp[i] = arr[left_ptr];
            left_ptr++;   
        }
        else{
            temp[i] = arr[right_ptr];
            right_ptr++;
        }
        i++;
    }
    while(left_ptr <= mid){
        temp[i] = arr[left_ptr];
        left_ptr++;
        i++;
   }
    while(right_ptr <= high){
        temp[i] = arr[right_ptr];
        right_ptr++;
        i++;
    }
    for (int j = low;j<=high;j++){
        arr[j] = temp[j-low];
    }

}

void mergeSort_descending(int arr[],int low,int high){

    // base condition
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort_descending(arr,low,mid);
    mergeSort_descending(arr,mid + 1,high);
    mergee_descending(arr,low,mid,high);
    
}


int main(){
    int n;

    cout<<"enter length of your array"<<endl;
    cin>>n;
    int my_array[n];
    cout<<"now enter the values"<<endl;
    // taking values of array from user
    for (int i=0;i<n;i++){
        cin>>my_array[i];
    }

    // printing the array for the user
    cout<<"before merge sort"<<endl;
    for (int i=0;i<n;i++){
        
        cout<<my_array[i]<<" ";
    }
    cout<<endl;
    int choice;
    cout<<"1 for ascending , o for descending"<<endl;
    cin>>choice;
    if (choice==1){
        mergeSort_ascending(my_array,0,n-1);
    }
    else{
        mergeSort_descending(my_array,0,n-1);   
    }
    
    cout<<"after merge sort"<<endl;
    for (int i=0;i<n;i++){
        
        cout<<my_array[i]<<" ";
    }
}
