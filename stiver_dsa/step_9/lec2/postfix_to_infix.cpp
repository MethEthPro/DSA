#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool operand(char c){
    if(('A' <= c && c <= 'Z') ||
        ('a' <= c && c <='z') ||
        ('0' <= c && c<='9')) return true;
     
    return false;   
}
string postfix_to_infix(string s){
    int n = s.size();
    stack<string> st;
    for(int i=0;i<n;i++){
        if(operand(s[i])){
            string topush = string(1,s[i]) ;
            st.push(topush);
        }
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string combined = '(' + t2 + s[i] + t1 + ')';
            st.push(combined); 
        }
    }

    return st.top();
}

int main(){
    string postx = "AB-DE+F*/";

    cout<<"postfix --- > "<<postx<<endl;

    string infx = postfix_to_infix(postx);

    cout<<"infix --- > "<<infx<<endl;

}