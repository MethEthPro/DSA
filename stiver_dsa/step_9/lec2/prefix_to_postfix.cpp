#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool operand(char c){
    if(('A' <= c && c <= 'Z') ||
        ('a' <= c && c <='z') ||
        ('0' <= c && c<='9')) return true;
     
    return false;   
}

string prefix_to_postfix(string s){
    int n = s.size();
    stack<string> st;
    for(int i=n-1;i>=0;i--){
        if(operand(s[i])){
            string topush = string(1,s[i]);
            st.push(topush);
        }
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string combined = t1 + t2 +s[i];
            st.push(combined);
        }
    }
    return st.top();
}

int main(){
    string prex = "/-AB*+DEF";

    cout<<"prefix -- > "<<prex<<endl;

    string postx = prefix_to_postfix(prex);

    cout<<"postfix -- > "<<postx<<endl;
}