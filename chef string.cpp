#include<bits/stdc++.h>
#include<string>
using namespace std;

string str[1111],st[1111];
string common(string str1,string str2)
{
 string result;
 int n1=str1.length(),n2=str2.length();

    for(int i=0,j=0;i<n1-1&&j<n2-1;i++,j++)
    {
       if(str1[i]!=str2[j])
         break;
         result.push_back(str1[i]);
    }
    return(result);
}

string Max(string str1[],int n)
{
  string max;
  max=str1[0];

  for(int i=0;i<n-1;i++)
  {
     if(str1[i].length()>max.length())
        max=str1[i];

       // cout<<"max="<<max<<'\n';
  }
  return max;
}

string bubble(string str1[],int n)
{
     string p;
   for(int i=0;i<n-1;i++)
     for(int j=0;j<n-1;j++)
     {
       if(str1[j]>str1[j+1])
         p=str1[j];
         cout<<p<<'\n';
     }
     return p;
}
bool sub(string str1,string str2)
{
    for(int i=0;i<str2.length();i++)
      if(str1[i]!=str2[i])
        return false;

    return true;

}

    int main()
    {
      int n,q;
      cin>>n;
      string s1[n],p;
      for(int i=0;i<n;i++)
        cin>>s1[i];

        cin>>q;
        string s2[q],s3[q];
        int a[q];
        for(int i=0;i<q;i++)
           cin>>a[i]>>s2[i];

           for(int i=0;i<q;i++)
            {

               for(int j=0;j<a[i];j++)
               {
                str[j]=common(s1[j],s2[i]);
               }

               p=Max(str,a[i]);
               //cout<<"p="<<p<<'\n';
               int k=0;
               for(int j=0,k=0;j<a[i];j++)
               {
                  if(sub(s1[j],p))
                    st[k++]=s1[j];
               }
               //k--;
               cout<<"k="<<k<<'\n';
               p=bubble(st,k);

               cout<<p<<"\n";

            }
    }

