#include<iostream>
using namespace std;

int brute(int arr[],int n){
    for(int i=1;i<=n;i++){
        int flag = 0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}

int better(int arr[],int n){
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<n+1;i++){
        if(hash[i]==0){
            return i;
        }
    }
}

int optimalSum(int arr[],int n){
    int sum1=n*(n+1)/2;
    int sum2=0;
    for(int i=0;i<n-1;i++){
        sum2=sum2+arr[i];
    }
    return sum1-sum2;
}

int optimalXOR(int arr[],int n){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor1=xor1^arr[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^n;
    return xor1^xor2;
}
int main(){
    cout<<"PROGRAM TO FIND THE MISSING NUMBER"<<endl;
    int my_arr[4]={1,2,4,5};
    int n = 5;
    int ans_brute=brute(my_arr,n);
    int ans_better=better(my_arr,n);
    int ans_optimal_sum=optimalSum(my_arr,n);
    int ans_optimal_xor=optimalXOR(my_arr,n);
    cout<<ans_brute<<endl;
    cout<<ans_better<<endl;
    cout<<ans_optimal_sum<<endl;
    cout<<ans_optimal_xor<<endl;

}