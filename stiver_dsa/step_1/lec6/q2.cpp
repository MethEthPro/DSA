// character hashing
#include<iostream>
using namespace std;
int main(){
    string s="abcabefc";
    int my_hash[26]={0};
    for(int i=0;i<s.size();i++){
        my_hash[s[i]-'a']++;
    }
    cout<<my_hash['c'-'a']<<endl;
    cout<<my_hash['e'-'a']<<endl;
    cout<<my_hash['d'-'a']<<endl;
}