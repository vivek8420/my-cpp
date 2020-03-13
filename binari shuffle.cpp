    #include <bits/stdc++.h>
    #define ll long long int
    #define si(x) scanf("%d",&x)
    #define sl(x) scanf("%lld",&x)
    #define sd(x) scanf("%lf",&x)
    //#define min(x,y) ((x>y)?(y):(x))
    #define pb push_back
    #define mk make_pair
    #define Nothing -1

    using namespace std;

    //const int size;

    ll t,a,b,ans;

    int bits(ll n){
        int cou=0;
        while(n){
            if(n&1)
                ++cou;
            n>>=1;
        }
        return cou;
    }

    int main(){

        sl(t);

        while(t--){

            sl(a),sl(b);

            if(a==b){
                printf("0\n");
                continue;
            }

            if(b==0){
                printf("-1\n");
                continue;
            }

            if(b==1&&a!=0){
                printf("-1\n");
                continue;
            }

            int size_a=bits(a);
            int size_b=bits(b-1);
            //printf("%d %d\n",size_a,size_b);
            if(size_a>size_b)
                ans=1;
            else
                ans=size_b-size_a;

            printf("%d\n",ans+1);

        }

        return 0;
    }
