#include<iostream>
#include<map>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 multimap <float,string> mp;
    mp[5.6]="vivek";
   mp[6.5]="shraddha";
   mp[4.76]="deep";
   mp[9.8]="meet";
   mp[5.6]="savaliya";
   multimap<float,string>::iterator in;
   for(in=mp.begin();in!=mp.end();in++)
       cout<<in->first<<" "<<in->second<<endl;

    map <string,float> mpa;
  mpa["vivek"]= 5.5;
   mpa["shraddha"]=6.5;
   mpa["deep"]=4.78;
   mpa["meet"]=9.856;
   map<string,float>::iterator ind;
   for(ind=mpa.begin();ind!=mpa.end();ind++)
   {
       cout<<ind->first;
       cout<<"="<<ind->second<<endl;
   }
}