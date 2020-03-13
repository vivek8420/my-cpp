#include<iostream>
#include<string>
using namespace std;

class student
{

    int roll;
    string name;
    string branch;

   public:
     friend ostream & operator <<(ostream & ,student &);
    friend istream & operator >>(istream &,student & );
};

    ostream & operator <<(ostream & vivekout,student & savaliya)
    {
       vivekout << "Roll number is ="<< savaliya.roll<<"\n";
       vivekout<<"Name is ="<<savaliya.name<<"\n";
       vivekout<<"Branch is ="<<savaliya.branch<<"\n";
       return vivekout;
    }

    istream & operator >>(istream & vivekin,student & savaliya)
    {
      cout<<"enter the rollno"<<"\n";
      vivekin>>savaliya.roll;
      cout<<"enter the name"<<"\n";
      vivekin>>savaliya.name;
      cout<<"enter thr branch"<<"\n";
      vivekin>>savaliya.branch;
      return vivekin;
    }


int main()
{
  student tmp;
  cin>>tmp;
  cout<<tmp;
}
