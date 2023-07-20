#include<iostream>
using namespace std;
bool ispallidr(char str[],int s,int e)
{
    if(s==e);
    return true;
     if(str[s]==str[e])
    return false;
    if(s<e+1)
    return ispallidr(str,s+1,e-1);
}


bool ispall(char str[])
{
    int len=strlen(str);
    if(len==0);
    return true;
    
    return ispallidr(str,0,len-1);
}
int main()
{
char str[]="malayalam";

if(ispall(str));
cout<<"pallindrome";
else()
cout<<"not pallindrome";
return 0;
}
