#include<iostream>
#include<cstdlib>
using namespace std;
void result(string p1, string p2)
{
      int i,r1,r2,ret1,reh1,ret2,reh2,p1s=0,p2s=0;
      string c;
      cout<<"***********THE GAME BEGINS**************\n";

          cout<<p1<<" YOUR TURN \n";
          for(i=1;i<=5;i++)
          {
            cout<<"ROUND :"<< i <<endl;
            cout<<"ENTER YOUR CHOICE |HEAD| OR |TAIL|";
            cin>>c;
            if(c=="head"||c=="HEAD"||c=="H"||c=="h")
            {
                reh1=1;
            }
            else if(c=="tail"||c=="TAIL"||c=="t"||c=="T")
            {
                ret1=2;
            }
            else
            {
              cout<"INVALID INPUT\n";
            }
            r1=1+(rand() % 2);
            if(r1==reh1)
            {
                p1s++;
            }
            else if(r1==ret1)
            {
              p1s++;
            }
            else
            {
              continue;
            }
          }



          cout<<p2<<" YOUR TURN \n";
              for(i=1;i<=5;i++)
              {
                cout<<"ROUND : "<<i<<endl;
                cout<<"ENTER YOUR CHOICE |HEAD| OR |TAIL|\n";
                cin>>c;
                if(c=="head"||c=="HEAD"||c=="H"||c=="h")
                {
                    reh2=1;
                }
                else if(c=="tail"||c=="TAIL"||c=="t"||c=="T")
                {
                    ret2=2;
                }
                else
                {
                  cout<"ENTER THE VALID INPUT\n";
                }
                r2=1+(rand() % 2);
                if(r2==reh2)
                {
                    p2s++;
                }
                else if(r2==ret2)
                {
                  p2s++;
                }
                else
                {
                  continue;
                }
            }


      if(p1s>p2s)
      {
              cout<<p1<<" WINS BY"<< p1s<<" - "<<p2s<<endl;
      }
      else if(p1s<p2s)
      {
              cout<<p2<<" WINS BY"<< p2s<<" - "<<p1s<<endl;
      }
      else
      {
                cout<<"THERE IS TIE BETWEEN "<<p1<<" AND "<<p2<<" BY "<<p1s<<" - "<<p2s<<endl;
      }


}
int main()
{
        int i,o=0,a;
        string p1,p2,k;

        cout<<"**************** WELCOME TO THE GAME OF *****************\n             *********TOSS***********\n";
        do
        {
              do
              {
                o++;

                cout<<"ENTER THE 1ST PLAYER NAME:\n";
                cin>>p1;
                cout<<"ENTER THE 2ND PLAYER NAME:\n";
                cin>>p2;
                result(p1,p2);

              }while(o>=5);
                cout<<"DO YOU WANNA PLAY THE GAME AGAIN\n:";
                cin>>k;
                if(k=="y"||k=="Y"||k=="yes"||k=="YES"||k=="ya")
                {
                  a=1;
                }
                else
                {
                  a=0;
                  cout<<"THANKS FOR PLAYING THE GAME\n";
                  break;
                }
        }while(a!=0);
        return 0;
}
