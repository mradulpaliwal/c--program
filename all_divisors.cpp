#include<iostream>
using namespace std;
int main()
{


int n;
cout<<"enter no ";
cin>>n;
for(int i=1;i*i<n;i++)
{
if(n%i==0)
{
    cout<<i;


}
}

for(int i=n;i>=1;i--)
{
    if(n%i==0)
    cout<<(n/i);

}


}

