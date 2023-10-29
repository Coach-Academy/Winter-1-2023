#include <bits/stdc++.h>

using namespace std;


/*int solve(string p, string q , string s)
{
    int index=0,index1,index2;
    do {

            if(s==p)
              index1=index;
            if(s==q)
                index2=index;

    index++;
    } while(next_permutation(s.begin(), s.end()));


    return abs(index1-index2);
}*/


int main()
{


    /// problem D
  /*  int n;
    long long m;
    cin>>n>>m;
    int song;
    int songcom;
    int dif[100002];
    long long sum=0;
    for(int i=0 ; i<n ; i++)
    {
        cin>>song>>songcom;
        dif[i]=song-songcom;

        sum+=song;
    }

    sort(dif,dif+n,greater<int>());
    int i=0;
    while(sum>m && i<n)
    {
        sum-=dif[i];
        i++;
    }
    if(sum<=m)
        cout<<i;
    else
        cout<<-1;*/

    /// problem E
  /*  int k,n,x;
    int a;
    cin>>k>>n>>x;
    int sum=0;
    for(int i=0 ; i<k-n ; i++)
    {
        cin>>a;
        sum+=a;
    }
    for(int i=k-n ; i<k ; i++)
    {
        cin>>a;
        sum+=x;

    }
    cout<<sum;*/

    /// problem F

   /* int n,a;
    int amazing=0;
    int mn,mx;
    cin>>n;
    cin>>a;
    mn=a;
    mx=a;
    for(int i=1 ; i<n ; i++)
    {

        cin>>a;
        if(a<mn)
        {
            mn=a;
            amazing++;
        }
        else if(a>mx)
        {
            mx=a;
            amazing++;
        }

    }

    cout<<amazing;*/

    /// problem G
  /*  int puzz[51];
    int n,m;
    cin>>n>>m;
    for(int i=0 ; i<m ; i++)
    {
        cin>>puzz[i];
    }
    sort(puzz,puzz+m);

    int mn=999999;
    for(int i=0 ; i<m-(n-1) ; i++)
    {
        //cout<<puzz[i+(n-1)]<<"\n";
        mn=min(mn,puzz[i+(n-1)]-puzz[i]);
    }
   // 7 10 10 12
    cout<<mn;*/

    ///problem H

  /*  int a[5];
    for(int i=0 ; i<4 ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    int res=0;
    for(int i=1 ; i<4 ; i++)
    {
        if(a[i]==a[i-1])
            res++;

    }
    cout<<res;*/

    /// problem I

   /* int n;
    cin>>n;
    int a,b;
    int sum=0;
    int mx=0;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a>>b;
        sum-=a;
        sum+=b;
        mx=max(sum,mx);
    }
    cout<<mx;*/

/// problem K
   /* int n;
    int x;
    char c;
    cin>>n;
    string p="",q="",s="";
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;

        p+=char(x);
        s+=char(x);
    }
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        q+=char(x);
    }
    sort(s.begin(),s.end());

    cout<<solve(p,q,s);*/


  /* string s1;
   char s[100];
   cin>>s1;
   for(int i=0 ; i<4 ; i++)
   {
       cin>>s[i];
   }
   cout<<s[0]<<s[1]<<"\n";
   cout<<s1<<"\n";*/









    return 0;
}
