#include <iostream> 
using namespace std; 
 
int fact(int a){ 
 if(a==0||a==1){ 
     return 1; 
 }else { 
     return a*fact(a-1); 
 } 
} 
int main(){ 
 int n,r;     
 cout<<"Enter the total participants:"; 
 cin>>n; 
 cout<<"Enter the no. of ways:"; 
 cin>>r; 
 int p=fact(n)/fact(n-r); 
 cout<<"The permutation is:"; 
 cout<<p; 
return 0; 
} 
