#include<iostream>
using namespace std;
int oddoccur(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)   // we have used xor operator
    {
        count=count^arr[i];
    }
    return count;
    
    }
int main()
{
    int arr[]={1,2,3,2,1,1,1,4,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<oddoccur(arr,n);

}