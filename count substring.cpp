#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
  int n,c=0,i;
  cin>>n;
   string str;
   cin>>str;

   for(i=0;i<n;i++)
   {
      if(str[i]=='1')c++;
   }
   cout<<c*(c+1)/2<<endl;
}
}
