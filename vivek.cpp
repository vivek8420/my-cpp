#include<iostream>
using namespace std;

int main()
{
   bool flag;
   flag=1;
   int test;

   while(flag)
   {
     cin >> test;
     cout << flag;

     if(!test)
     {

       flag=false;
       cout << flag;
     }
   }
   return 0;
}
