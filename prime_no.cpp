#include<iostream>
using namespace std;
int main()
{
 int n,a=0 ;
 cout<<"enter no";

 cin>>n;
 for(int i=2;i<=(n/2);i++)
 {
    if(n%i==0)
    {
    cout<<"not prime";
    a=1;
    }
 }
 if(a==0)
 {
    cout<<"prime";

 }
 

 
    
 
 

 
 
}