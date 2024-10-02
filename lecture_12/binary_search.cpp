#include<iostream>
using namespace std;
int binarySearch(int arr[],int size , int key){
    int start = 0;
    int end  =  size - 1;
    int mid = start + (end - start) / 2;
    while(start <= end){
        if (key == arr[mid]){
            return mid;
        }
        
    }

}

int main(){
    int even[6] = {2,8,34,55,66,98};
    int odd[5] = {23,45,66,77,89};
}