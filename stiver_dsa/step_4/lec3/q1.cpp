#include<iostream>
#include<bits/stdc++.h>

using namespace std;



pair<int,int> linearMethod(int arr[],int n, int x){
    int first=-1;
    int last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(first==-1){
                first=i;
            }
            last=i;
        }
    }
    pair<int,int> ans ={first,last};
    return ans;
}


int lowerbound(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int upperbound(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

pair<int,int> lowupbound(int arr[],int n,int x){
    int first=lowerbound(arr,n,x);
    if(first==n || arr[first]!=x){
        return {-1,-1};
    }
    int last = upperbound(arr,n,x)-1;
    return {first,last};
}

int firstOccurance(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return first;
}


int lastOccurance(int arr[],int n,int x,int f){
    int low=f;
    int high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return last;
}


pair<int,int> firstlast(int arr[],int n,int x){
    int first=firstOccurance(arr,n,x);
    if(first==-1){
        return {-1,-1};
    }
    int last=lastOccurance(arr,n,x,first);
    return {first,last};
}
int main(){

    // finding first and last occurences of an element in an array 


    int myarr[8]={2,4,6,8,8,8,11,13};

    // using linear search
    pair<int,int> mylin_1=linearMethod(myarr,8,8);
    pair<int,int> mylin_2=linearMethod(myarr,8,11);
    pair<int,int> mylin_3=linearMethod(myarr,8,10);

    cout<<"linear for 8: "<<mylin_1.first<<" "<<mylin_1.second<<endl;
    cout<<"linear for 11: "<<mylin_2.first<<" "<<mylin_2.second<<endl;
    cout<<"linear for 10: "<<mylin_3.first<<" "<<mylin_3.second<<endl;

    // using upper bound and lower bound
    // we can use inbulit functions lower_bound and upper_bound too
    pair<int,int> myupplower_bound_1=lowupbound(myarr,8,8);
    pair<int,int> myupplower_bound_2=lowupbound(myarr,8,11);
    pair<int,int> myupplower_bound_3=lowupbound(myarr,8,10);

    cout<<"upper lower bound for 8: "<<myupplower_bound_1.first<<" "<<myupplower_bound_1.second<<endl;
    cout<<"upper lower bound for 11: "<<myupplower_bound_2.first<<" "<<myupplower_bound_2.second<<endl;
    cout<<"upper lower bound for 10: "<<myupplower_bound_3.first<<" "<<myupplower_bound_3.second<<endl;

    // uisng binary search
    pair<int,int> myfirstlast_1 =firstlast(myarr,8,8);
    pair<int,int> myfirstlast_2 =firstlast(myarr,8,11);
    pair<int,int> myfirstlast_3 =firstlast(myarr,8,10);


    cout<<"first last for 8: "<<myfirstlast_1.first<<" "<<myfirstlast_1.second<<endl;
    cout<<"first last for 11: "<<myfirstlast_2.first<<" "<<myfirstlast_2.second<<endl;
    cout<<"first last for 10: "<<myfirstlast_3.first<<" "<<myfirstlast_3.second<<endl;

}