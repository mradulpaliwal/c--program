#include<iostream>
using namespace std;
int main()
{
   int arr[]={1,6,9,8,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   int res=0;
   for(int i=1;i<n;i++)
   {
       if(arr[i]>arr[res])
        res=i;
   }
   cout<<"largest element is"<<arr[res] ;
   return 0;

   }