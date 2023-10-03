#include <iostream>
using namespace std;
int main()
{
    /// problem E
     /*   int n,m,a;
        cin>>n>>m>>a;
        long len = (n + a - 1) / a;
        int wid = (m + a - 1) / a;
        long long res;
        res*=wid;
        cout << res;*/

   /// problem F
   /*
        int N;
        cin>>N;
        int a,b;
        a=N%10;
        b=N/100;
        if(a==b)
        {
            cout<<"Yes";
        }
        else
            cout<<"No";*/



         ///problem G
       /* int a,b;
        cin>>a>>b;
        int res=a-1;
        if(b>=a)
        {
            res++;
        }

        cout<<res;*/

        ///problem h
      /*  int k,x;
        cin>>k>>x;
        if(500*k>=x)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }*/


        ///problem i
       /* int n;
        cin>>n;

        switch(n) {
  case 1:
    cout<<"one";
    break;
  case 2:
    cout<<"two";
    break;
    case 3:
    cout<<"three";
    break;
    case 4:
    cout<<"four";
    break;
    case 5:
    cout<<"five";
    break;
    case 6:
    cout<<"six";
    break;
    case 7:
    cout<<"seven";
    break;
    case 8:
    cout<<"eight";
    break;
    case 9:
    cout<<"nine";
    break;
    default:
         cout<<"Greater than 9";
        }*/


        /// problem j

       /* int A,B,C,d;
        cin>>A>>B>>C;
        if(A>B)
            cout<<"Takahashi";
        else if(B>A)
             cout<<"Aoki";
        else{
        if(C==0)
        {
             cout<<"Aoki";

        }
        else
        {
            cout<<"Takahashi";
        }
        }*/






        ///problem k

        /* n=12;
         1 2 3 4 5 6 7 8 9 10 11

         1 3 5 7 9 11 2 4 6 8 10

         n=11 6
         n=12 6
         (n+1)/2 */


/*
         long long n,k;
         cin>>n>>k;

         long long mid=(n+1)/2;

         if(k>mid)
         {
             cout<<(k-mid)*2;
         }
         else
         {
             cout<<(k*2)-1;
         }*/




       ///problem m
       /*  float v,t,s,d;
         cin>>v>>t>>s>>d;
         float d1,d2;
         d1=v*t;
         d2=v*s;
         if(d>=d1 && d<=d2)
         {
             cout<<"No";
         }
         else
         {
             cout<<"Yes";
         }*/



         ///problem n
        /* string s;
         cin>>s;
         if(s=="RRR")
            cout<<3;
         else if(s=="RRS" || s=="SRR")
            cout<<2;
         else if(s=="RSS" || s=="RSR" || s=="SRS" || s=="SSR")
            cout<<1;
         else{
            cout<<0;
         }*/













    return 0;


}
