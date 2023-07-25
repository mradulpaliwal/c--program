#include<iostream>
#include<math.h>
using namespace std;
int powerset(char* set,int setsize)
{
    int n=pow(2,setsize);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<setsize;j++)
        {
          if(i&(1<<j))
          cout<<set[j];
        }
        cout<<endl;c
    }
}
int main()
{
    char set[]={'a','b','c'};
   cout<<powerset(set,3);
    
}