#include<iostream>
using namespace std;
int main()
{
int n,r, total=0,b;
cout<<"enter no";
cin>>n;
b=n;


while(n>0)
{
    r=n%10;
    total=(total*10)+r;
    n=n/10;

}
if(total==b)
{
    cout<<"pallindrome no";

}
else
cout<<"not pallindrome";
}


