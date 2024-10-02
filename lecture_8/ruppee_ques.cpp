#include<iostream>
using namespace std;
int main(){
    int amount,note;
    cout<<"enter your amount"<<endl;
    cin>>amount;
    switch (1){
        case 1 :{
            note=amount/100;
            amount=amount-(note*100);
            cout<<note<<" hundres ruppees notes"<<endl;
    
        case 2 :{
            note=amount/50;
            amount=amount-(note*50);
            cout<<note<<" fifty ruppees notes"<<endl;
        }
        case 3 :{
            note=amount/20;
            amount=amount-(note*20);
            cout<<note<<" twenty ruppees notes"<<endl;
        }
        case 4 :{
            note=amount/1;
            amount=amount-(note*100);
            cout<<note<<"  one ruppees notes"<<endl;
        }
    }
}
}