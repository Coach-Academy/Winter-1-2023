#include <bits/stdc++.h>

using namespace std;

int main()
{
   ///problem A

  /* int c=48;
   cout<<char(c)<<" "<<c;
   char a='a'
   if(int(a)>97)*/
   ///32
   /*string s;
   cin>>s;
   if(s[0]>='a' && s[0]<='z'){
      s[0]-=32;
   }
   cout<<s;*/


   ///problem C
  /* int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;

        cout<<s[0];
       for(int i=1 ; i<s.size()-1 ; i+=2)
       {
           cout<<s[i];

       }
       cout<<s[s.size()-1]<<"\n";

   }*/



 /*  int n;
   cin>>n;
   while(n--)
   {
      string b;
      string a="";

      cin>>b;
      if (b.size()==2){
         cout<<b<<"\n";
      }
      else if(b.size()>2)
      {
        for (int i=0;i<b.size();i+=2){

            a+=b[i];

        }
        cout<<a<<b[b.size()-1]<<"\n";

      }





   }*/

  /* int n;
   cin>>n;
   string s;
   cin>>s;
   int counter=0;
   for(int i=0 ; i<s.size(); i++)
   {
       if(s[i]==s[i+1])
       {
           counter++;
       }
   }
   cout<<counter;*/

   ///problem E

  /* string s;
   getline(cin,s);
   sort(s.begin(),s.end());
   if(s=="{}")
    cout<<0;
   else
   {
   int counter=1;

   for(int i=0 ; i<s.size()-1 ; i++)
   {
       if(s[i]!=s[i+1] && s[i]>='a' && s[i]<='z' && s[i+1]>='a' && s[i+1]<='z')
           counter++;

   }
   cout<<counter;
   }*/

   ///problem G
   /*int n,k;
   cin>>n>>k;
   string s;
   int counter=0;
   for(int i=0 ; i<n ; i++)
   {
       cin>>s;

      // sort(s.begin(),s.end());
       int f=1;
       for(int i=0 ; i<=k ; i++)
       {
            f=0;
          for(int j=0 ; j<s.size() ; j++)
          {
              if(i==(int(s[j])-48))
              {
                  f=1;
                  break;
              }
          }

          if(f==0)
          {
              break;
          }
       }

       if(f==1)
        counter++;





   }
   cout<<counter;
  */
  ///problem k
  /*int n;
  cin>>n;
  string s;
  cin>>s;
  int a[100]={0};
  for(int i=0 ; i<n ; i++)
  {
      if((s[i]>='a' && s[i]<='z'))
      {
          s[i]-=32;
      }
      a[int(s[i])]=1;
  }
  int flag=1;
  for(int i=65 ; i<=90 ; i++)
  {
      if(a[i]==0)
      {
          flag=0;
          break;

      }
  }
  if(flag==0)
    cout<<"No";
  else
    cout<<"Yes";*/


    return 0;
}



