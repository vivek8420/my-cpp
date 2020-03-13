#include<iostream>
#include<stdlib.h>
using namespace std;

class safeIntArray
{
    public:
  int Array[4];
  int v;
   int & operator[](int index)
   {
     if((index < 0)||(index>4))
     {
        cout<<"subscript out of range";
        exit(1);
     }
     else
       return Array[index];
   }
};

int main()
{
  safeIntArray safearray;
  for(int i=0;i<4;i++)
  safearray[i]=i+4;
  safearray[4]=555;

  for(int i=0;i<4;i++)
  cout<<safearray.Array[i]<<"\n";

  cout<<"v="<<'\n';
  //safearray[-1]=10;
}
