#include<iostream>
using namespace std;

void permute(string str , int i=0)
{
    if(i==str.length()-1)
    {
        cout<<str<<endl;
        return;
    }
    for(int j=i;j<str.length();j++)
    {
        swap(str[i],str[j]);
        permute(str,i+1);
        swap(str[i],str[j]);
    }


    }


int main()
{
 string str="ABC";
  permute(str);
  return 0;

}
