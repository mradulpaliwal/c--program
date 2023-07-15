#include<iostream>
using namespace std;
int main()
{
int n,fact=1,r,count=0;
cout<<"enter no";
cin>>n;
for(int i=2;i<=n;i++)
{
    fact=fact*i;
    
}



while(fact%10==0)
{
count++;
fact=fact/10;
}
cout<<count;

}

