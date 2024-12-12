#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// brute for positve
int brute_positive(int arr[],int n,int k){
    int maxLen=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                maxLen=max(maxLen,j-i+1);
                break;
            }
        }
    }
    
    return maxLen;
}
// brute for zero.negative
int brute_zero_negative(int arr[],int n,int k){
    int maxLen=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                maxLen=max(maxLen,j-i+1);
                
            }
        }
    }
    
    return maxLen;
}

// better fro positive and optimal for others
int better_for_positive_optimal_for_others(int arr[], int n,int k){
    int sum = 0;
    int maxLen=0;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        int rem = sum - k;
        if(mpp.find(rem) != mpp.end()){
            int len = i-mpp[rem];
            maxLen=max(maxLen,len);
        }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum]=i;
        }
    }
    return maxLen;
}

int optimal_for_positive(int arr[],int n,int k){
    int left=0;
    int right=0;
    int sum=arr[0];
    int maxLen=0;
    while(right<n){
        
        
        while(sum>k && left<=right){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
        
       
    }
    return maxLen;
}

int main(){
    
    int my_arr_1[10]={1,2,3,1,1,1,1,4,2,3};
    int my_arr_2[10]={1,2,3,1,0,1,1,4,2,3};
    int my_arr_3[10]={1,2,3,1,1,-1,1,1,2,3};
    int my_arr_4[10]={1,2,0,1,1,-1,1,1,2,3};

    int k = 3;
    // brute method for an array having all positive elements
    int brute_subarr_len_pos = brute_positive(my_arr_1,10,3);
    cout<<"brute positive "<<brute_subarr_len_pos<<endl;   

    // brute method for an array having an array with zero as well as positive elements
    int brute_subarr_len_zero = brute_zero_negative(my_arr_2,10,3);
    cout<<"brute zero "<<brute_subarr_len_zero<<endl;

    // brute method for an array having negative elemnts also 
    int brute_subarr_len_negative = brute_zero_negative(my_arr_3,10,3);
    cout<<"brute negative "<<brute_subarr_len_negative<<endl;

    // brute method for an array having an array with zero as well as negative elements
    int brute_subarr_len_zero_neg = brute_zero_negative(my_arr_4,10,3);
    cout<<"brute zero and negative "<<brute_subarr_len_zero_neg<<endl;

    // only difference in brute for positive and zero/negative is that there is a break 
    // after we found sum to be equal to k , its because if we found sum to be equal to k
    // then adding any poitive element will only inc it and thus we dont need to go any firther
    // we can start with next i 

    // better method for an array having all positive elements
    int better_subarr_len_pos = better_for_positive_optimal_for_others(my_arr_1,10,3);
    cout<<"better positive "<<better_subarr_len_pos<<endl;   
    
    // optimal method for an array having an array with zero as well as positive elements
    int optimal_subarr_len_zero = better_for_positive_optimal_for_others(my_arr_2,10,3);
    cout<<"optimal zero "<<optimal_subarr_len_zero<<endl;

    // brute method for an array having negative elemnts also 
    int optimal_subarr_len_negative = better_for_positive_optimal_for_others(my_arr_3,10,3);
    cout<<"optimal negative "<<optimal_subarr_len_negative<<endl;

    // optimal method for an array having an array with zero as well as negative elements
    int optimal_subarr_len_zero_neg = better_for_positive_optimal_for_others(my_arr_4,10,3);
    cout<<"optimal zero and negative "<<optimal_subarr_len_zero_neg<<endl;

    // optimal method for an array having all positive elements
    int optimal_subarr_len_pos = optimal_for_positive(my_arr_1,10,3);
    cout<<"optimal positive "<<optimal_subarr_len_pos<<endl; 


}