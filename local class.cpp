 #include<stdio.h>
 #include<iostream>
 #include<string>
 using namespace std;

void fun()
{
    class vivek
 {
    int x;
    string name;

    public:
      void print()
     {
      cout <<"enter tehe value of x:";
      cin >> x;
      cout << "enter the name:";
      cin >> name;
      cout << x << "\n";
      cout << name <<"\n";
      }
 };


 vivek stu;
     stu.print();
}

 main()
 {
   fun();
 }

