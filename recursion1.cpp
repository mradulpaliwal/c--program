#include<iostream>
using namespace std;
int fun(int n)
{
    if(n==0)
    return n;
    fun(n-1);
    cout<<n<<endl;
    fun(n-1);

}
int main()
{
    int n;
    cin>>n;
    fun(3);
    return  0;

}