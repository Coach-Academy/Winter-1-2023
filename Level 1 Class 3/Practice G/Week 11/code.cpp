#include <bits/stdc++.h>

using namespace std;

int main()
{
    /// Problem A
 /* int b,n,m;
  cin>>b>>n>>m;
  int k[1001],d[1001];

  for(int i=0 ; i<n ; i++)
  {
      cin>>k[i];
  }
  for(int i=0 ; i<m ; i++)
  {
      cin>>d[i];
  }

  int mx=-1;
  int temp;

  for(int i=0 ; i<n ; i++)
  {
      for(int j=0 ; j<m ; j++)
      {
          temp=k[i]+d[j];
          if(temp>mx && temp <=b)
          {
              mx=temp;
          }
      }
  }
  cout<<mx<<"\n";*/

  /// problem D

  /*int s,n,s1,b1;
  cin>>s>>n;
  vector<pair<int,int> > dragons;

  for(int i=0 ; i<n ; i++)
  {
      cin>>s1>>b1;
      dragons.push_back(make_pair(s1,b1));
  }
  sort(dragons.begin(),dragons.end());

  int f=0;

  for(int i=0 ; i<n ; i++)
  {
      if(s>dragons[i].first)
      {
          s+=dragons[i].second;
      }
      else
      {
          f=1;
      }
  }

  if(f)
  {
      cout<<"NO";
  }else
    cout<<"YES";*/


    /// problem G
/*
    int n,m,x;
    cin>>m>>n;
    vector<int> puzz;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        puzz.push_back(x);
    }

    sort(puzz.begin(),puzz.end());
    int mn=90000;
    for(int i=0 ; i<=n-m ; i++)
    {
        if(puzz[i+m-1]-puzz[i]<mn)
        {
            mn=puzz[i+m-1]-puzz[i];
        }
    }
    cout<<mn;


  */
  /// problem H
  /*int n,x;
  vector<int> v;
  cin>>n;
  for(int i=0 ; i<n ; i++)
  {
      cin>> x;
      v.push_back(x);
  }
  sort(v.begin(),v.end());

  swap(v[0],v[n-1]);

  for(int i=0 ; i<n ; i++)
    cout<<v[i]<<" ";*/

    ///problem I
    /*
  int t,n,k;
  cin>>t;
  while(t--)
  {
      int a[101];
      cin>>n>>k;
      for(int i=0 ; i<n ; i++)
      {
          cin>>a[i];
      }
      int i=0;
      while(k>0 && i!=n-1)
      {
          int mn=min(a[i],k);
          a[i]-=mn;
          if(a[i]==0)
          {
              i++;
          }
          a[n-1]+=mn;
          k-=mn;
      }

      for(int i=0 ; i<n ; i++)
        cout<<a[i]<<" ";
      cout<<"\n";
  }*/


  /// problem L
  string s;
  cin>>s;

  int c=s.find('0');
  if(c==-1)
  {
      cout<<s.substr(1)<<endl;
  }
  else{
    cout<<s.substr(0,c)<<s.substr(c+1,s.length())<<endl;
  }








  /// problem k
  /*int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int a[n+1];
      for(int i=0 ; i<n ; i++)
        cin>>a[i];

      int c=0,mx,mn;

      for(int i=0 ; i<n-1; i ++)
      {
          if(a[i]>a[i+1])
          {
              mx=a[i];
              mn=a[i+1];
          }
          else
          {
              mx=a[i+1];
              mn=a[i];
          }

          while(mx>2*mn)
          {
              mx=ceil(mx*1.0/2.0);
              c++;
          }
      }
      cout<<c<<"\n";




  }*/




  /// problem L
 /* int t,a[100001],b[100001],n;
  cin>>t;
  while(t--)
  {
      cin>>n;
      for(int i=0 ; i<n ; i++)
        cin>>a[i];
      for(int i = 0 ; i<n ; i++)
        cin>>b[i];

      bool flag=0;
      int k=0,m=-1;
      for(int i=0 ; i<n ; i++)
      {
          if(a[i]!=b[i])
          {
              if(b[i]<a[i])
              {
                  flag=1;
                  break;
              }
              k=b[i]-a[i];
              m=i;
              break;
          }
      }

      for(int i=m ; i<n  ;i++)
      {
          if(a[i]==b[i])
            break;
          a[i]+=k;
      }
      for(int i=0 ; i<n ; i++)
      {
          if(a[i]!=b[i])
          {
              flag=1;
              break;
          }
      }

      if(flag)
      {
          cout<<"NO\n";

      }
      else
        cout<<"YES\n";


  }*/





    return 0;
}
