#include<iostream>
using namespace std;


int func(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }

        while(arr[j]>pivot && j>=low+1){
            j--;
        }

        if(i<j){
            swap(arr[i],arr[j]);
        }

    }

    swap(arr[low],arr[j]);

    return j;
}


void qS(int arrr[],int low,int high){

    if(low<high){
        int pindex = func(arrr,low,high);
        qS(arrr,low,pindex-1);
        qS(arrr,pindex + 1,high);

    }
}



// again this also works on the divide and conquer rule 


int main(){
    int n;
    cout<<"enter the size of your unsorted array"<<endl;
    cin>>n;

    int my_arr[n];
    
    for(int i=0;i<n;i++){
        cin>>my_arr[i];
    }
    cout<<"array before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<my_arr[i]<<" ";
    }
    qS(my_arr,0,n-1);
    cout<<"array after quick sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<my_arr[i]<<" ";
    }
}
