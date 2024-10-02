#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i =0; i<=n-2; i++){
        int min = i;
        for(int j =i; j<=n-1; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;        

    }
    cout<<"dfaf"<<endl;
}

void bubble_sort(int arr[], int n){
    for (int i =n-1; i>0; i--){
        int did_swap = 0;
        for (int j =0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                did_swap = 1;
            }
        }
        if(did_swap==0){
            break;
        }
        cout<<"run"<<endl;
    }
}

void insertion_sort(int arr[],int n){
    for(int i = 0; i<n; i++){
        int j = i;

        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;

        }

    }
}

int main(){
    int n;
    cin >> n;
    int arrr[n];
    // inputing values of array
    for(int i=0; i<n; i++){
        cin>>arrr[i];
    }
    // printing array before sort
    for(int i=0;i<n;i++){
        cout<<arrr[i]<<" ";
    }
    cout<<endl;
    selection_sort(arrr,n);

    // bubble_sort(arrr, n);

    // insertion_sort(arrr,n);

    
    // printing values of array after sort
    for(int i=0;i<n;i++){
        cout<<arrr[i]<<" ";
    }

    
    

    return 0;
}