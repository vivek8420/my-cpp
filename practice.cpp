#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

class vivek
{
   int x;
   string name;

    public:
        class student;
     /*   {
             public:
            int y;
            string batch;


            void data()
            {
                cout << "enter the y:" ;
                cin >> y;
                cout << "enter the batch:";
                cin >> batch;
                cout<<y<<"\n"<<batch<<"\n";
            }
        };*/

   public:

   void print()
   {
     cout<<"enter th evalue of x:";
     cin >> x;
     cout << "enter the name:";
     cin>>name;
     cout << x<<"\n";
     cout << name << "\n";

   }
};

 class vivek::student
{
     public:
            int y;
            string batch;

    public:
            void data()
            {
                cout << "enter the y:" ;
                cin >> y;
                cout << "enter the batch:";
                cin >> batch;
                cout<<y<<"\n"<<batch<<"\n";
            }
};

int main()
{
   vivek stu,*ptr;
   ptr=&stu;
   vivek :: student tmp;
   ptr->print();
   tmp.data();

   printf("%u\n",ptr++);
   printf("%u",ptr);

}



