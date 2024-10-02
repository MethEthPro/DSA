#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int n;
    cout<<"enter number of rows "<<endl;
    cin>>n;
    int i=1;
    
     while(i<=n){
      int j = 1;
      while(j<=n-i+1){
        cout<<j;
        j=j+1;
      }
      int star = 1;
      int b = i-1;
      while (star<=2*b){
        cout<<"*";
        star=star+1;
      }
      int x =1 ;
      int a = n+1-i;
      while(x<=n-i+1){
        cout<<a;
        x=x+1;
        a=a-1;
      }
      

     

      cout<<endl;
      i=i+1;
    }
    return 0; 
} 




