#include <bits/stdc++.h>

using namespace std;

int main()
{
    ///Problem A
   /* string s;
    cin>>s;
    set<int> st;

    for(int i=0 ; i<s.size() ; i++)
    {
        st.insert(s[i]);
    }

    if(st.size()%2==0)
        cout<<"CHAT WITH HER!";
    else
      cout<<"IGNORE HIM!";*/

      ///problem B

      /*string s;
      getline(cin,s);
      set<char>st;
      for(int i=0  ;i<s.size() ; i++ )
      {

          st.insert(s[i]);
      }




      if(st.size()>3)
        cout<<st.size()-4;
      else
        cout<<st.size()-2;

        */

        ///Problem c

       /* int t;
        cin>>t;
        string s1,s2;
        while(t--)
        {

            cin>>s1>>s2;
            int f=0;
            set<char>st;
            for(int i=0 ; i<s1.size(); i++)
            {

                st.insert(s1[i]);
            }
            for(int j=0 ; j<s2.size() ; j++)
            {
                if(st.find(s2[j])!=st.end())
                {
                    f=1;
                    break;
                }
            }

            if(f)
            {
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";

        }*/

        ///problem D
     /*   char c;
        cin>>c;
        string s="qwertyuiopasdfghjkl;zxcvbnm,./",s1,ans="";
        cin>>s1;

        ///Map
        if(c=='R')
        {
            map<char,char>mp;
            for(int i=1 ; i<s.size() ; i++)
            {
                mp[s[i]]=s[i-1];
            }
            for(int i=0 ; i<s1.size() ; i++)
            {
                cout<<mp[s1[i]];
            }
        }
        else
        {
            map<char,char>mp;
            for(int i=0 ; i<s.size()-1 ; i++)
            {
                mp[s[i]]=s[i+1];
            }
            for(int i=0 ; i<s1.size() ; i++)
            {
                cout<<mp[s1[i]];
            }
        }

        ///string

      /*  if(c=='R')
        {
        for(int i=0 ; i<s1.size() ; i++)
        {
           // mp[s1[i]]->>s[i]
         int index=s.find(s1[i]);
         ans+=s[index-1];

        }

        }
        else
        {
        for(int i=0 ; i<s1.size() ; i++)
        {
           int index=s.find(s1[i]);
           ans+=s[index+1];
        }

        }
        cout<<ans;*/

       /* int n,m,x,y;
        cin>>n>>m;
        set<int>st;
        for(int i=0 ; i<n ; i++)
        {
            cin>>x;
            for(int j=0 ; j<x ; j++)
            {
                cin>>y;
                st.insert(y);
            }
        }
        if(st.size()==m)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";*/

      /*  int n;
        cin>>n;

        string s[n+1];
    for(int i=0 ; i<n ; i++)
        cin>>s[i];

    map<string,int>mp;
    for(int i=n-1 ; i>=0 ; i--)
    {
        if(mp[s[i]]!=1)
        {
         cout<<s[i]<<"\n";
         mp[s[i]]=1;
        }
    }///O(nlogn)
    */

    /* int q;
     cin>>q;
     while(q--)
     {


     int n,r,m;
     cin>>n>>r;
     set<int>st;
     for(int i=0 ; i<n ; i++)
     {
         cin>>m;
         st.insert(m);
     }
     auto itr=st.rbegin();
     int cnt=0,dist;
     while(itr!=st.rend())
     {
        dist=cnt*r;
        if(*itr-dist<=0)
        {
           break;
        }
        else{
            cnt++;
            itr++;
        }

     }
     cout<<cnt<<"\n";
     }*/
     ///O(NlogN)
     int q,x,m;
     cin>>q;
     int cnt=0;
     set<int> mono;
     set< pair<int,int> > poly;
     map<int,int>mp;
     while(q--)
     {
         cin>>x;
         if(x==1)
         {
            cnt++;
            cin>>m;
            mono.insert(cnt);
            poly.insert({m,cnt*-1});
            mp[cnt]=m;
         }
         else if(x==2)
         {
          int customer=*(mono.begin());
          cout<<customer<<" ";
          mono.erase(customer);
          poly.erase({mp[customer],customer*-1});
          mp.erase(customer);
         }
         else{
            pair<int,int> customer=*(poly.rbegin());
            cout<<customer.second*-1<<" ";
            poly.erase(customer);
            mono.erase(customer.second*-1);
            mp.erase(customer.second*-1);
         }

     }
 ///O(nlogN)







    return 0;
}
