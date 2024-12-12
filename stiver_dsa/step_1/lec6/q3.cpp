// all characters hashing just create a 256 size hash 
#include<iostream>
using namespace std;
int main(){
    string s ="a#A@";
    int my_hash[256]={0};
    for(int i=0;i<s.size();i++){
        my_hash[s[i]]++;
    }
    cout<<my_hash['a']<<endl;
    cout<<my_hash['@']<<endl;
    cout<<my_hash['N']<<endl;
}