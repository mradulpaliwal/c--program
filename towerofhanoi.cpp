#include<iostream>
using namespace std;
void TOH(int n,char start,char aux ,char end )
{
    int count=0;
if(n==1)
{

count++;
cout<<"move disk "<<n<<"from"<<start<<"to"<<end<<endl;
return;

}

TOH(n-1,start,end,aux);
count++;
cout<<"move disk"<<n<<"from"<<start<<"to"<<end<<endl;
TOH(n-1,aux,start,end);
}
int main()
{
    int n;
    cout<<"enter number of disks";
    cin>>n;
    TOH(n,'A','B','C');
    


    
}