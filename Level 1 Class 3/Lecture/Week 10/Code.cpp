#include <bits/stdc++.h>

using namespace std;

int main()
{

   ///set
   /* set<int> s;
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(7);
    s.insert(-1);

  /*  cout<<*(s.begin())<<"\n";
    cout<<*(s.rbegin())<<"\n";*/
    //s.end()

  //  set<int>::iterator it;

   /* for(auto it:s)
    {
        cout<<*it<<" ";
        it++;

    }*/

  /*  for(it=s.begin() ; it!=s.end() ; it++)
     {
       cout<<*it<<" ";
     }
     it=s.begin();
     it++;
     s.erase(it);
     for(it=s.begin() ; it!=s.end() ; it++)
     {
       cout<<*it<<" ";
     }*/


     ///map
    // int a[500];

  /*  map<string,int>mp;



    cout<<mp["mohamed"]<<"\n";
    map<string,int>::iterator it;

    //it=mp.find("ahmed");


    for(it=mp.begin() ; it!=mp.end() ; it++)
    {
        cout<<(*it).first<<" "<<it->second;
    }*/

    ///problem 1

    /*map<string,int> mp;
    int n;
    cin>>n;
    string name;
    while(n--)
    {
        cin>>name;
        if(mp.find(name)==mp.end())
        {
            cout<<"OK\n";
            mp[name]=1;
        }
        else{
            cout<<name<<mp[name]<<"\n";
            mp[name]++;
        }

    }*/
    ///(Nlog(n))

    ///problem 2
    int t,n,m,x,sum;
    cin>>t;

    while(t--)
    {
        set<int> s;
        cin>>n>>m;
        sum=0;
        for(int i=0 ; i<n ; i++)
        {
            cin>>x;
            s.insert(x);
        }
        for(int i=0; i <m ; i++)
        {
            cin>>x;
            if(s.find(x)!=s.end())
            {
                sum++;
            }
        }
        cout<<sum<<"\n";



    }///O(nlogn)












    return 0;
}
