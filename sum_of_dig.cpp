#include<iostream>
using namespace std;
int main()
{
int n,r, total=0;
cout<<"enter no";
cin>>n;

while(n>0)
{
    r=n%10;
    total=total+r;

    n=n/10;

}
cout<<"sum of digit"<<total;
}


