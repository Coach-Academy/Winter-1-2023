#include <bits/stdc++.h>

using namespace std;

int main()
{
   /// problem A
  /* ios_base::sync_with_stdio(flase);
   cin.tie(NULL);*/
  /* int t,x,n;
   queue<int>q;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&x);
       if(x==1)
       {
           scanf("%d",&n);
           q.push(n);
       }
       else if(x==2)
       {
           if(!q.empty())
            q.pop();
       }
       else
       {
           if(q.empty())
            printf("Empty!\n");
           else
            printf("%d\n",q.front());
       }
   }*/
   ///O(n)


  /// problem C
  /* int n;
   string s;
   cin>>n;
   while(n--)
   {
      cin>>s;
      stack<char>st;
      int f=1;
      for(int i=0 ; i<s.size() ; i++)
      {
          if(s[i]=='('||s[i]=='{'||s[i]=='[')
                {
                    st.push(s[i]);
                }
                else
                {
                    if(st.empty())
                    {
                        cout<<"NO\n";
                        f=0;
                        break;
                    }


                    if((s[i]==')' && st.top()=='(')||(s[i]==']' && st.top()=='[') ||(s[i]=='}' && st.top()=='{') )
                        {
                            st.pop();
                        }
                        else
                        {
                        cout<<"NO\n";
                        f=0;
                        break;
                        }

                }
      }

      if(!st.empty()&&f)
        cout<<"NO\n";
      else if(f && st.empty())
      cout<<"YES\n";


   }*/  ///O(n)

   ///problem E
  /* int n,m,x;
   cin>>n>>m;

   queue< pair<int,int> > q;


   for(int i=0 ; i<n ; i++)
   {
       cin>>x;
       q.push({x,i});
   }
   int v;
   while(q.size()>1)
   {
       v=q.front().first-m;
       if(v>0)
       {
           q.push({v,q.front().second});
       }

       q.pop();
   }

   cout<<q.front().second+1;*/
   ///O(maxelemnt/m+n)

   ///problem F
  /* string s="",temp;
   stack<string> st;
   st.push(s);
   int t,x,op;
   cin>>t;
   for(int i=0 ; i<t ; i++)
   {
       cin>>x;

       if(x==1)
       {
           cin>>temp;
           s+=temp;
           st.push(s);
       }
       else if(x==2)
       {
           cin>>op;

           s=s.substr(0,s.size()-op); //O(n)
           st.push(s);
       }
       else if(x==3)
       {
           cin>>op;
           cout<<s[op-1]<<"\n";
       }
       else{
            if(!st.empty())
            {st.pop();
            s=st.top();
            }

       }
   }///O(n^2);*/

   ///problem G
  /* string s;
   cin>>s;
   stack<char>st;
   for(int i=0 ; i<s.length() ; i++)
   {
       if(st.empty())
       {
           st.push(s[i]);
       }
       else if(s[i]==st.top())
       {
           st.pop();
       }
       else{
       st.push(s[i]);
       }
   }
   if(st.empty())
    cout<<"yes";
   else
    cout<<"no";*/

   ///O(n)


   int t,x,num;
   cin>>t;
   priority_queue<int,vector<int>, greater<int> > pq;
   queue<int> q;

   while(t--)
   {
      cin>>x;
      if(x==1)
      {
          cin>>num;
          q.push(num);

      }
      else if(x==2)
      {
          if(pq.empty())
          {
              cout<<q.front()<<"\n";
              q.pop();
          }
          else{
          cout<<pq.top()<<"\n";
          pq.pop();
          }
      }
      else
      {

          while(!q.empty())
          {
              pq.push(q.front());
              q.pop();
          }


      }





   }





    return 0;
}
