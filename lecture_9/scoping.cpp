#include<iostream>
using namespace std;
void update(int arr[],int size){
    cout<<endl<<"inside the function"<<endl;
    arr[0]=120;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    cout<<"going back to main function";

}
int main(){
    int arrr[3]={1,2,3};
    update(arrr,3);
    cout<<endl<<"printing in main funcction"<<endl;
    for(int i=0;i<3;i++){
        cout<<arrr[i]<<" ";

    }
    cout<<endl;
}
/* 
so here we see that unlike any variable whose value does not change for
the main function when its value is changed in the defined function, 
but for an array the value changes as it is not making a copy , 
it is giving the defined function the address of its elements , so all
the changes are being made on the original array.
*/