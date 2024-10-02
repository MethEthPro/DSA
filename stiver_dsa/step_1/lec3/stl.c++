#include<bits/stdc++.h>
using namespace std;
int main(){

}


// pairs

void explainPair(){
    pair<int,int> p = {1,3} ;
    cout<<p.first<<" "<<p.second;

    pair<int , pair<int,int>> s = {1,{2,3}};
    cout<<p.first<<" "<<s.second.first<<" "<<s.second.second;

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<< arr[0].first<<" "<<arr[2].second<<"";


}


// Vectors

void explainVectors(){
    vector<int> v;
    
    v.push_back(2);
    v.emplace_back(3);
    
    vector<pair<int,int>> vec ;

    vec.push_back({2,3}); 
    // we need to add curly braces for push_back but not for emplace_back
    vec.emplace_back(3,4);

    vector<int> v(10,100);
    // this creates a vector of 10 size , each value being 100

    vector<int> v(5);
    // this creates a vector of size 5 with each value being 0 or garbage value 

    vector<int> v1(v);
    // this creates a copy of vector v in v1 



    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    vector<int>::iterator it = v.begin();
    // v.begin only gives the address of first element 
    it ++;
    cout<<*it<<"";
    // this gives us the 2nd element of our vector

    vector<int>::iterator it = v.end();
    // does not point to the memory of last element , instead it points to the memory location just after the last element , so if uou do it-- you get it to point to memory loctation of last one

    // v.front() and v.back() gives us the first and last element of the vector

    // printing the vector
    // there are 3 methods
    // 

    for(vector<int>::iterator it = v.begin(); it != v.end() ; it++){
        cout<<*(it);
    }

    for ( auto it = v.begin(); it != v.end(); it ++){
        cout<<*(it);
    }
    for ( auto it: v){
        cout<<(it)<<endl ;

    }

    // deleting , single element and range of elements
    // {10,20,30,40}
    v.erase(v.begin() + 1);
    // this deletes 20 

    // {10,20,30,40,50},,,,[start,end),, end not included
    v.erase(v.begin()+1 , v.begin() +3 );
    // {10,40,50}



    // Insert Function
    vector<int> v(2,100) ; // {100,100}
    v.insert(v.begin(),300) ; //{300,100,100}
    v.insert(v.begin()+1,2,10);//{300,10,10,100,100}


    }