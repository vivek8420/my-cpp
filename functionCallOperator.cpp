#include<iostream>
#include<string>
using namespace std;

class point
{
   int x;
   int y;

   public:
   point(){}//empty construction
   point(int tx,int ty)
   {
     x=tx;//construction
     y=ty;
   }
   operator()(int tx,int ty)
   {
       x=tx;//function operator
       y=ty;
   }

   void show()
   {
     cout<<"("<<x<<","<<y<<")"<<"\n";
   }
};

int main()
{
	point p1,p2;//empty constructin call
	p1=point(2,3);//construction call
	p2(4,5);//function call operator
	/* without function operator this statemenr give error,this is not execute using construction*/
	p1.show();
	p2.show();
}
