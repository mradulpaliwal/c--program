#include<iostream>
using namespace std;
bool ispow2(int n)
{
    if((n!=0)&&(n&(n-1)==0)) // we have used brian kenningam algo
    {
        return true;

    }
    else 
    {
        return false;
    }
}
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    cout<<ispow2(n);
}