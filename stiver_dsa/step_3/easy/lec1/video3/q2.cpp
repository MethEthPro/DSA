#include<iostream>
using namespace std;
int main(){
    cout<<"PROGRAM TO FIND THE MAX CONSECUTIVE ONES"<<endl;
    int my_arr[9]={1,1,0,1,1,1,0,1,1};
    int counter = 0;
    int max_one=0;
    for(int i=0;i<9;i++){
        if(my_arr[i]==1){
            counter+=1;
        }
        else{
            counter=0;
        }
        max_one=max(max_one,counter);
    }
    cout<<max_one<<endl;
}