#include<iostream>
using namespace std;
bool sort(int arr[],int size)
{
    for(int i=1;i<size;i++)

    if(arr[i]<arr[i-1])
    return false;
    

return true;
    
}
int main()
{
    int arr[5];
    int i ;
    cout<<"eneter numbers";

    for(i=0;i<5;i++)
    {
        cin>>arr[i];

    }
    cout<<"the numbers are";
    for(int y=0;y<5;y++)
    {
        cout<<arr[y]<<endl;
    }
    if (sort(arr,5))
    {
        cout<<"sorted array";
           }
           else
           cout<<"not sorted";

    return 0;
}