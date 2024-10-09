#include<iostream>
using namespace std;


void selection_sort_ascending(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min_index = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

void selection_sort_descending(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int max_index = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]>arr[max_index]){
                max_index = j;
            }
        }
        swap(arr[max_index],arr[i]);
    }
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
    cout<<"1 for ascending , 0 for descending"<<endl;
    cin>>choice;

    cout<<"array before sorting"<<endl;

    for(int i=0;i<n;i++){
        cout<<my_array[i]<<" ";
    }

    if(choice==1){
        selection_sort_ascending(my_array,n);

    }

    else{
        selection_sort_descending(my_array,n);
    }


    cout<<"array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<my_array[i]<<" ";
    }

}