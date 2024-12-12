#include<iostream>
#include<vector>
using namespace std;

void bruteMethod(int arr[],int n){

    vector<int> temp;
    for(int i =0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int x = temp.size();
    for(int i=0; i<x ;i++){
        arr[i]=temp[i];
    }
    for(int i =x;i<n;i++){
        arr[i]=0;
    }
    return ;

}

void optimalMethod(int arr[],int n){
    int j = -1;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    if(j==-1){
        return ;
    }
    for(int i =j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return ;
}
int main(){
    cout<<"PROGRAM TO MOVE ALL ZEROES TO THE END OF THE ARRAY"<<endl;
    int n;
    cout<<"enter the size of your array"<<endl;
    cin>>n;
    int my_arr[n];
    cout<<"enter your array"<<endl;
    for(int i=0;i<n;i++){
        cin>>my_arr[i];
    }

    cout<<"printing array before any changes"<<endl;
    for(int i=0;i<n;i++){
        cout<<my_arr[i]<<" ";
    }
    cout<<endl;

    int choice;
    cout<<"enter 1 for optimal , 0 for brute"<<endl;
    cin>>choice;
    if(choice==0){
        bruteMethod(my_arr,n);
    }
    else if (choice==1)
    {
        optimalMethod(my_arr,n);
    }
    
    cout<<"printing array after moving all the zeroes to the end"<<endl;
    for(int i=0;i<n;i++){
        cout<<my_arr[i]<<" ";
    }

}