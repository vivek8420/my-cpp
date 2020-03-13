#include<iostream>
#include<deque>
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
};
int main()
{
   student vivek(100,"vivek");
   student shraddha(56,"shraddha");
   student deep(89,"deep");
   student meet(45,"meet");

   deque <student> dq;
   dq.push_back(vivek);
   dq.push_front(shraddha);//insert object front of last object
   dq.push_front(deep);
   dq.push_back(meet);

   deque <student> :: iterator index;

   for(index=dq.begin();index!=dq.end();index++)
      cout<<*index;
}
