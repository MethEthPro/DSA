#include<iostream>
using namespace std;
int main (){
    string str1="sarthak";
    string str2="sarthaka";
    int len1= str1.length();
    int len2=str2.length();
    string final ="";
    for(int i=0;i<len1;i++){
        int alphabet='a';
        char str1element=str1[i];
        for(int j=0;j<len2;j++){
            int alphabet ='a';
            char str2element=str2[j];
            if(str1element==str2element){
                final=final+str1element;
                
                if(i==(len1-1)){
                    cout<<final;
                    break;

                }
                
                break;
            }
        }

    }

  
}