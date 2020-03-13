#include<iostream>
using namespace std;

class matrix
{
   int real;
   int imaj;

   public:
    matrix(int treal=0,int timaj=0)
    {
       real=treal;
       imaj=timaj;
    }
  matrix add(matrix tmp)
  {
     int treal,timaj;
     treal=real+tmp.real;
     timaj=imaj+tmp.imaj;
     return matrix(treal,timaj);
  }
  matrix operator +(matrix tmp)
  {
     int treal,timaj;
     treal=real+tmp.real;
     timaj=imaj+tmp.imaj;
     return matrix(treal,timaj);
  }
  matrix operator ++()  //prefix
  {
     real++;
     imaj++;
     return matrix(real,imaj);
  }
  matrix operator ++(int )
  {
     imaj++;
     real++;
     return matrix(real,imaj);
  }
  void display()
  {
   cout<<real<<"+"<<imaj<<"i \n";
   }
  };

  int main()
  {
    matrix mat1(10,20);
    matrix mat2(20,30);
    matrix mat3=mat1+mat2;
     mat3.display();
     matrix mat4=mat1.add(mat2);
     mat4.display();

    // mat1++;
     //mat1++;
     //++mat2;
     mat1++.display();
    (++mat2).display();
  }
