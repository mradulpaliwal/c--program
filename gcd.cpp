#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter nos";
    cin>>a,
    cin>>b;
    
     int res;
     res=min(a,b);

     while(res>0)
    {
     
     if(a%res==0&&b%res==0)
    {
        break;

    }
    res--;
}
cout<<"gcd of two no is"<<res;
}
