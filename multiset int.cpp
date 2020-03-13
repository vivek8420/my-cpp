#include<bits/stdc++.h>
using namespace std;

int main()
{
 // set<int>vivek;
 multiset<int>vivek;
  int n,t;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
     cin>>t;
     vivek.insert(t);
  }

 // set<int>::iterator index;
  multiset<int>::iterator index;
  for(index=vivek.begin();index!=vivek.end();index++)
  {
    cout<<*index<<endl;
  }

/*index=vivek.begin();
cout<<*index<<endl;
index=vivek.end();
index--;
cout<<*index<<endl;
*/

}
