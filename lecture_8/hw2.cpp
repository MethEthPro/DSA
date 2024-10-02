#include<iostream>
using namespace std;
int setbits(int a);
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    int sum=setbits(x)+setbits(y);
    cout<<sum<<endl;

}
int setbits(int a){
    int a_bit=0;
    while (a!=0){
        if (a&1){
            a_bit+=1;
        }
        a=a>>1;

    }
    return a_bit;
}