#include<iostream>
using namespace std;
int countbits(int n)
{
    int count =0;
while (n>0)
{
 if((n&1)==1)
 count++;


    n=n>>1;
    
}
return count;


}
int main()
{
int n;
cout<<"enter number";
cin>>n;

cout<<"no of set bits"<<countbits(n);
}
