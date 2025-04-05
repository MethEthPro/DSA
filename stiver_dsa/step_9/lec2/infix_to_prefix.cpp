#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string reverse_expression(string s){
    int n = s.size();
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(s[i] == '(') s[i] = ')';
        else if(s[i] == ')') s[i] = '(';
        if(s[j] == '(') s[j] = ')' ;
        else if(s[j] == ')') s[j] = '(';
        swap(s[i],s[j]);
        
        i++;
        j--;
    }
    return s;
}

bool operand(char c){
    if(('A' <= c && c <= 'Z') ||
        ('a' <= c && c <='z') ||
        ('0' <= c && c<='9')) return true;
     
    return false;    
}

int priority(char c){
    if(c == '^') return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    return 0;
}

string infix_to_prefix(string s){
    int n = s.size();
    s = reverse_expression(s);
    stack<char> st;
    string ans = "";
    for(int i=0;i<n;i++){  
        if(operand(s[i])){
            ans += s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while(! st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            if(!st.empty() && priority(s[i]) < priority(st.top())){
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    ans = reverse_expression(ans);
    return ans;
}

int main(){
    string ix = "(A+B)*C-D+F";

    cout<<"infix -- > "<<ix<<endl;

    string prex  = infix_to_prefix(ix);
    cout<<"prefix -- > "<<prex<<endl;
}