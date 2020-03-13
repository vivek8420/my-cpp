#include<iostream>
using namespace std;

void swap(int&,int&);

int main()
{
   int i,j;
   cout << "enter the value of i \n";
   cin>>i;
   cout << "enter the value of j \n";
   cin >> j;

   swap(i,j);

   cout << "**swaping**\n";

   cout <<"i=" << i << "\n" << "j="<< j;

}

void swap(int& a,int& b)
{
   int tmp;
   tmp=a;
   a=b;
   b=tmp;
}
