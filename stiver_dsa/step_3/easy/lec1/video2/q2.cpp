#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void left_rotate_brute(int arr[],int n, int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
    return ;
}

void left_rotate_optimal(int arr[],int n, int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    return ;
}    

void right_rotate_brute(int arr[],int n, int d){
    int temp[d];
    for(int i = n-d;i<n;i++){
        temp[i-(n-d)]=arr[i];
    }
    for(int i=0;i<n-d;i++){
        arr[i+d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[i]=temp[i];
    }
    return;
}

void right_rotate_optimal(int arr[],int n,int d){
    reverse(arr,arr+(n-d));
    reverse(arr+(n-d),arr+n);
    reverse(arr,arr+n);
    return;

}
int main(){
    cout<<"PROGRAM TO LEFT/RIGHT ROTATE AN ARRAY BY ONE PLACE"<<endl;
    int n;
    int choice_1;
    int d;
    cout<<"enter the size of your array"<<endl;
    cin>>n;
    cout<<"enter elements of your array"<<endl;
    int my_arr[n];
    for(int i=0;i<n;i++){
        cin>>my_arr[i];
    }
    
    cout<<"printing array before shifting"<<endl;
    for(int i =0;i<n;i++){
        cout<<my_arr[i]<<" ";
    }
    cout<<endl;
    cout<<"enter by how much you want to shift"<<endl;
    cin>>d;
    d=d%n;
    cout<<"do you want to left rotate brute(1) or right rotate brute (2) or left rotate optimal(-1) or right rotate optimal(-2)"<<endl;
    cin>>choice_1;
    if(choice_1==1){
        left_rotate_brute(my_arr,n,d);
    }
    else if (choice_1==-1)
    {
        left_rotate_optimal(my_arr,n,d);
    }
    else if (choice_1==2)
    {
        right_rotate_brute(my_arr,n,d);
    }
    else if (choice_1==-2)
    {
        right_rotate_optimal(my_arr,n,d);
    }
    

    cout<<"printing array after shifting"<<endl;
    for(int i =0;i<n;i++){
        cout<<my_arr[i]<<" ";
    }

    


}