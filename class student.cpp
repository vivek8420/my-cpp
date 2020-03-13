#include<iostream>
#include<string>
using namespace std;

class student
{
    public:
    int id;
  static string name;
   string branch;
   void printDetail();
};
string student :: name;
void student :: printDetail()
   {
      cout << "NAME=" << name << "\n";
      cout << "ID=" << id << "\n";
      cout << "BRANCH=" << branch << "\n";
   }

int main()
{
   student vivek;
   vivek.id=100;
   //vivek.name= "savaliya vivek";
   vivek.branch="computer";
   vivek.printDetail();
}
