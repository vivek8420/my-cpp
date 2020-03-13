#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  int t;
  cin>>t;

  while(t--)
  {
     ll n,tmp;
     cin>>n;
     multiset <int> mset;
     for(ll i=0;i<n;i++)
     {
        cin>>tmp;
        mset.insert(tmp);
     }
     multiset <int> ::iterator ptr;
     ll a,b;
     ptr=mset.begin();
     a=*ptr;
     ptr++;
     b=*ptr;
    // cout<<a<<' '<<b<<endl;
     if(b-a!=1)
       {
         cout<<a<<endl;
         continue;
       }
       ptr=mset.end();
       ptr--;
       a=*ptr;
       ptr--;
       b=*ptr;
       if(a-b!=1)
       {
         cout<<a<<endl;
       }
       else
       {
           ptr=mset.begin();
           ptr++;
           for(int i=1;i<n-1;i++)
           {
               a=*ptr;
               b=*(++ptr);
               if(a-b==0)
               {
                   cout<<a<<endl;
                   break;
               }


           }
       }

  }
}
