#include<iostream>
using namespace std;
int deleteelement(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x);
        break;
    }
    if(i==n)
    {
        return n;


    }
    for(int j=i;j<(n-1);j++)
    {
        arr[j]=arr[j+1];
    }
       return (n-1);
    }
int main()
{
    int arr[]={1,2,7,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
   int updated_size=deleteelement(arr,x,n);
    cout<<"new arrray is"<<endl;
    for(int i=0;i<updated_size;i++)
{
    cout<<arr[i];
}
 return 0;
}