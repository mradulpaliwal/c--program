#include<iostream>
using namespace std;


int zerocount(int n)

{
    
int fact=1;
for(int i=2;i<+n;i*5)
{
    fact=fact*i;

}
int count=0;
while(fact%10==0)
{
    count++;
    fact=fact/10;

}
return count;
}


