#include<iostream>
#include<list>
#include<algorithm>
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
   bool operator <(student tmp)
   {
     return(mark<tmp.mark);
   }
   friend ostream & operator <<(ostream & tempout,student & tmp)
   {
      tempout<<"student Name="<<tmp.name<<endl;
      tempout<<"mark="<<tmp.mark<<endl;
      return(tempout);
   }

   //for find algorithm
   bool operator ==(student tmp)
   {
      return(mark == tmp.mark);
   }
};

int main()
{
   student vivek(100,"vivek");
   student shraddha(56,"shraddha");
   student deep(89,"deep");
   student meet(45,"meet");
   list <student> ls;
   ls.push_back(vivek);
   ls.push_back(shraddha);
   ls.push_back(deep);
   ls.push_back(meet);

   list <student>:: iterator index;
   for(index=ls.begin();index!=ls.end();index++)
      cout<<*index;

      student heet(70,"heet");
      index=find(ls.begin(),ls.end(),deep);   //find algorithm
      ls.insert(index,heet);//insert heet object before deep
       /*this is most efficience operation of list,we insert object any place in list*/
      cout<<"AFTER INSERT OBJECT"<<endl;
      for(index=ls.begin();index!=ls.end();index++)
        cout<<*index;
   }
