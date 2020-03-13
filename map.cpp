#include<iostream>
#include<map>
#include<string>
using namespace std;

class student
{
   int mark;
   string name;

   public:
   student(int tmark,string tname)
   {
        mark=tmark;
        name=tname;
   }
   bool operator <(student tmp)const  //without const map will not work
   {
     return(mark<tmp.mark);
   }
   friend ostream & operator <<(ostream & tempout,student & tmp)
   {
      tempout<<"student Name="<<tmp.name<<endl;
      tempout<<"mark="<<tmp.mark<<endl;
      return(tempout);
   }
};

int main()
{
   student vivek(96,"vivek");
   student shraddha(87,"shraddha");
   student deep(45,"deep");
   student meet(95,"meet");

   map <student,float> spi;
   spi[vivek]=8.76;
   spi[shraddha]=7.9;
   spi[deep]=5.6;
   spi[meet]=6.5;

   map <student,float>::iterator index;
   for(index=spi.begin();index!=spi.end();index++)
   {
      cout<<index->first;
      cout<<"spi is=";
      cout<<index->second;
      cout<<endl;
   }

}
