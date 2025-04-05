#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool operand(char c){
    if(('A'<= c && c<='Z' ) 
        || ('a' <= c && c<='z')
        || ('0' <= c && c<= '9' )){
            return true;
        }
    return false;    
}

int priority(char c){
    if(c == '^') return 3;
    else if(c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    else return 0;
}

string infix_to_postfix(string s){
    int n = s.size();
    string ans = "";
    stack<char> st ;
    for(int i=0;i<n;i++){
        if(operand(s[i])){
            ans += s[i];
        }
        
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while( !st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while( !st.empty() && priority(s[i]) <= priority(st.top())){
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

    return ans;
}

int main(){
    string ix = "a+b*(c^d-e)";

    cout<<"infix -- >  "<<ix<<endl;
    
    string postx = infix_to_postfix(ix);

    cout<<"postfix -- >  "<<postx<<endl;
}