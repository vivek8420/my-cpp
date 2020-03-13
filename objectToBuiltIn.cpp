#include<iostream>
#include<string>
using namespace std;

class student
{
   string name;
   int rollno;
   static int total;
   public:
   student()
   {
     rollno=0;
     name="";
     total++;
     cout<<"user no"<<total<<"\n";
   }

   void insert()
   {
       cout<<"enter the rollno:"<<"\n";
       cin>>rollno;
       cout<<"enter the name:"<<'\n';
       cin>>name;
   }

  operator string()
    {
      return name;
    }
   operator int()
   {
      return rollno;
   }
};
int student::total;

int main()
{
   student *array[3];

  for(int i=0;i<3;i++)
  {
      array[i]=new student();
      array[i]->insert();
      //string nameofstudent=*array[i];
      cout<<"Name is="<<string(*array[i])<<'\n';
      cout<<"Rollno="<<(int)*array[i]<<'\n';
     // cout<<nameofstudent;
  }
}
