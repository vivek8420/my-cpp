#include<bits/stdc++.h>
using namespace std;
int SwapCount(int x,int y)
{
    int count=0;
 for(int z=x^y;z!=0;z=z>>1)
 {
   if(z&1)
   {
       count++;
       x=x+1;
   }
 }
 return count;
}

int main()
{
 int x,y,count;
 cin>>x>>y;

 count=SwapCount(x,y);
 cout<<count;
}
