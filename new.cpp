#include<iostream>
using namespace std;

int main()
{
  int *p = new int;

  int *h = new int;
  int *q = new(p) int;
   delete q;
  cout << *p<<"\n";
  cout << p <<"\n"<< q<<"\n"<<&q;;
}
