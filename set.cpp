#include<iostream>
#include<set>
#include<string>
#include<vector>
using namespace std;

class student
{
   string name;
   int rn;

   public:

   student(string tname,int trn)
   {
      name=tname;
      rn=trn;
   }
   bool operator <(student tmpstu)const
   {
      return(rn<tmpstu.rn);
   }
   friend ostream & operator <<(ostream & tempout,student & temp)
  {
    tempout<<"student name is="<<temp.name<<'\n';
    tempout<<"mark="<<temp.rn<<'\n';
    return(tempout);
  }
};

int main()
{
  vector<student>vivek;
  vivek.push_back(student ("shradha",50));
  vivek.push_back(student ("vivek",100));
  vivek.push_back(student ("deep",23));
  vivek.push_back(student ("vivek",100));
  vector<student>::iterator index;
  set<student>setvivek;
  for(index=vivek.begin();index != vivek.end();index++)
  {
      cout<<*index<<endl;
     setvivek.insert(*index);
  }
  set<student>::iterator svindex;
  for(svindex=setvivek.begin();svindex!=setvivek.end();svindex++)
  {
      cout<<*svindex;
  }
}
