#include<iostream>
using namespace std;
void bitcheck(int n,int k)
{
    if(n&(1<<(k-1))!=0)
    {
        cout<<"set bit";

    }
    else{
        cout<<"not set bit";
    }
}
int  main()
    {
        int n ,k;
        cout<<"enter no";
        cin>>n;
        cout<<"enter bit";
        cin>>k;
        bitcheck(n,k);


    }
