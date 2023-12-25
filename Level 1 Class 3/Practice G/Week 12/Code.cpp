#include <bits/stdc++.h>

using namespace std;

/*vector<int> a;

/// problem A
int solve(int i)
{
    if(i==a.size())
        return 0;


    return solve(i+1)+a[i];
}
///O(n)
*/


/// problem B
int solve2(int i)
{
    if(i<=1)
        return i;

    return solve2(i-1)+solve2(i-2);
}
/// O(2^n)


/// problem C
/*int super(long long num)
{
    if(num<10)
        return num;

    int temp=0;
    while(num)
    {

    temp+=num%10;
    num/=10;
    }

    return super(temp);
}*/
///O(n*k)

/*
/// problem E
vector<int>a,b;
int prod(int i)
{
    if(i==a.size())
        return 0 ;


    return prod(i+1)+ a[i]*b[i];


}
/// O(n)


///problem f
/*int n,s,d;
vector<int>x,y;

int solve3(int i)
{
    if(i==n)
        return 0;


    if(x[i]<s && y[i]>d)
    {
        return 1;
    }
    else{
        return solve3(i+1);
    }
}*/
///problem G
/*string s;
int solve4(int i)
{
   if(i==s.length())
      return 1;///Yes

   if((i%2==0 && (s[i]<'a' || s[i]>'z'))|| (i%2==1 && (s[i]<'A' || s[i]>'Z')) )
   {
       return 0; ///NO
   }
   else
   {
       return solve4(i+1);
   }

}*/

/// problem H
/*
vector<int>a,b,c;
int n;
int mn=INT_MAX;

void solve5(int i)
{
    if(i==n)
        return ;

    if(c[i]>a[i])
        mn=min(mn,b[i]);

    solve5(i+1);



}*/

/// problem I
/*vector<int> a;
int x;

void solve6(int i)
{
    if (i==a.size())
        return;

    if(a[i]!=x)
        cout<<a[i]<<" ";

    solve6(i+1);

}*/
///O(n)

/// problem J
/*string s;
void solve7(int i)
{

    if(i==s.length())
        return ;

    if(s[i]=='.')
        return ;


    cout<<s[i];
    solve7(i+1);

}*/
/// O(n)


/// problem k
int n,sum=0;

void solve8(int i)
{

    sum+=i;
    if(sum>=n)
    {
        cout<<i;
        return ;
    }
    solve8(i+1);
}


int main() {
    ///problem A
   /*int t,n,x;
   cin>>t;
   for(int i=1 ; i<=t; i++)
   {
       cin>>n;

       for(int j=0 ; j<n ; j++)
       {
           cin>>x;
           a.push_back(x);
       }

       cout<<"Case "<<i<<": "<<solve(0)<<"\n";



       a.clear();

   }*/

 /// problem B
   /*int n;
   cin>>n;
   cout<<solve2(n);*/


   /// problem C
  /* string n;
   int k;
   long long num=0;

   cin>>n>>k;

       for(int j=0 ; j<n.length() ; j++)
       {
           num+=n[j]-'0';
       }

     num*=k;

   cout<<super(num)<<"\n";*/


/// problem E
  /* int n,x;
   cin>>n;
   for(int i=0 ; i<n ; i++)
   {
       cin>>x;
       a.push_back(x);
   }
   for(int i=0 ; i<n ; i++)
   {
       cin>>x;
       b.push_back(x);
   }


   if(prod(0))
   {
       cout<<"No";
   }
   else
   {
       cout<<"Yes";
   }*/



   /// problem f

 /*  cin>>n>>s>>d;
   int xx,yy;
   for(int i=0 ; i<n ; i++)
   {
       cin>>xx>>yy;
       x.push_back(xx);
       y.push_back(yy);
   }

   if(solve3(0))
   {
       cout<<"Yes";
   }
   else
    cout<<"No";*/


    ///problem G
   /* cin>>s;
    if(solve4(0))
    {
        cout<<"Yes";
    }
    else
        cout<<"No";*/

/// problem H
/*
    int aa,bb,cc;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>aa>>bb>>cc;
        a.push_back(aa);
        b.push_back(bb);
        c.push_back(cc);
    }
    solve5(0);

    if(mn==INT_MAX)
        cout<<-1;
    else
        cout<<mn;*/

    /// problem I

  /*  int n,aa;
    cin>>n>>x;
    for(int i=0 ; i<n ; i++)
    {
        cin>>aa;
        a.push_back(aa);
    }

    solve6(0);*/


    /// problem J

 /*  cin>>s;
   solve7(0);*/

   /// problem K
   cin>>n;
   solve8(0);





    return 0;
}


