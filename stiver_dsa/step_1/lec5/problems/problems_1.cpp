#include<iostream>
using namespace std;

void printLinearly_i_to_n(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    printLinearly_i_to_n(i+1,n);
}

void printLinearly_n_to_i(int i, int n){
    if(i>n){
        return;
    }
    cout<<n<<endl;
    printLinearly_n_to_i(i,n-1);
}
int main(){

    printLinearly_i_to_n(2,10);

    printLinearly_n_to_i(2,10);

}