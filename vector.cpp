#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
#define N 5
class student
{
   string name;
   int mark;

   public:
   student(string tname,int trn)
   {
     name=tname;
     mark=trn;
   }
   bool operator <(student temp)
   {
        if(mark==temp.mark)
             return(name < temp.name);
         else
             return(mark< temp.mark);
   }

  friend ostream & operator <<(ostream & tempout,student & temp)
  {
    tempout<<"student name is="<<temp.name<<'\n';
    tempout<<"mark="<<temp.mark<<'\n';
    return(tempout);
  }
};
  int main()
  {
     vector<student>vi;
     string str;
     int stu;
     for(int i=1;i<=N;i++)
     {
        cout<<"enter the name:";
        cin>>str;
        cout<<"enter the marks:";
        cin>>stu;
        vi.push_back(student(str,stu));
     }
     vector<student>::iterator index;
     sort(vi.begin(),vi.end());   // sort algorithm
     for(index=vi.begin();index < vi.end();index++)
     {
       cout<<*index<<endl;
     }

     cout<<"the sizeof vi is ="<<vi.size()<<endl;
  }
