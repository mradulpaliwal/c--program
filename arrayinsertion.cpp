#include<iostream>
using namespace std;
int insert(int arr[],int size,int cap,int pos,int num)
{
    int i;
    int index=pos-1;
    for( i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
        arr[index]=num;

    }
for(i=0;i<=(size+1);i++)
{
return arr[i];
}


}
int main()
{
    int arr[]={5,10,20};
    int n= sizeof arr/sizeof arr[0];
    int x;
    cout<<"enter the number";
    cin>>x;
    int y;
    cout<<"enter the position to enter";
    cin>>y;
    cout<<"new array is";
    for(int i=0;i<=n;i++)
    {
        cout<<artr[i];
    }


}