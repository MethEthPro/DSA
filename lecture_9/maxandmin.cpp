#include<iostream>
#include<math.h>
using namespace std;
int maxarray(int array[], int size);
int minarray(int array[], int size);
int main(){
    int size;
    cin>>size;
    int myarray[100];
    for (int i=0;i<size;i++){
        cin>>myarray[i];
    }
    cout<<maxarray(myarray,size)<<endl<<minarray(myarray,size)<<endl;
}
int maxarray(int array[],int size){
    int maxvalue=INT32_MIN;
    for(int i=0;i<size;i++){
        if (array[i]>maxvalue){
            maxvalue=array[i];
        }
    }
    return maxvalue;
}
int minarray(int array[],int size){
    int minvalue=INT32_MAX;
    for(int i=0;i<size;i++){
        if (array[i]<minvalue){
            minvalue=array[i];
        }
    }
    return minvalue;
}
