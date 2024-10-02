#include<bits/stdc++.h>
using namespace std;

// functions are a set of code which performs something for you
// functions are used to modularise code
// functions are used to increases readibility
// functions are used to tun same code multiple times

// types of functions
// void  --  does not return anything
// return
// paramterised
// non-parameterised




void printName(string name){
    cout<<"oye "<<name<<endl;
}  //this is an example of parameterised void function


int sum(int n1, int n2){
    int ans = n1 + n2;
    return ans;
}
// this function is a parameterised return function as it returns int value

// pass by value 
void doSomething(int num){
    num += 5;
    cout<<num<<endl;
    num*=5;
    cout<<num<<endl;
}

// pass by reference
// we use & sign , as it gives us the address of the variable 
void doSomethingAgain(int &num){
    num+=5;
    cout<<num<<endl;
    num*=5;
    cout<<num<<endl;
}


void doSomethingWithArray(int arr[], int n){
    arr[3] = arr[3] * 3;
}
int main(){
    string my_name;
    cin>>my_name;
    printName(my_name);

    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    int res = sum(num1, num2);
    cout<<"sum is "<<res<<endl;
    
    int num=10;
    doSomething(num);
    cout<<num<<endl;
    // variable retains its original value

    int new_num = 10;
    doSomethingAgain(new_num);
    cout<<new_num<<endl;
    // changes are made in the original variable 

    int n = 7;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<arr[3]<<endl;
    doSomethingWithArray(arr, n);
    cout<<arr[3]<<endl;
    // we see that our array element value changed even though we did not have
    // & sign , as in array its always pass by reference and no need for & sign




    return 0;
     
}