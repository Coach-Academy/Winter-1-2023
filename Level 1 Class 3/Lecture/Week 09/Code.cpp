#include <bits/stdc++.h>

using namespace std;

int main()
{

   /* vector<int>v;

    for(int i=0 ; i<n ; i++)
    {
        cin>>x;

    }*/

    ///stack
    /*stack<int>s;

    for(int i=0 ; i<8 ; i++)
    {

            s.push(i);
    }

    while(!s.empty())
    {
        cout<<s.top()<<"\n";

        s.pop();
    }*/

    ///queue

   /* queue<int> q;
    for(int i=0 ;i<8 ; i++)
    {
        q.push(i);
    }*/

    ///priority_queue
    /*priority_queue<int,vector<int>, greater<int> > pq;

    pq.push(5);
    pq.push(10);
    cout<<pq.top()<<"\n";
    pq.push(50);
    cout<<pq.top()<<"\n";
    pq.push(2);
    cout<<pq.top()<<"\n";
    pq.pop();
    cout<<pq.top()<<"\n";*/

    /// Problem 1

   /* int n,d,x;
    cin>>n>>d;
    queue<int>q;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        q.push(x);
    }
    for(int i=0 ; i<d ; i++)
    {
        q.push(q.front());
        q.pop();
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    */
    //O(n)

    ///problem 2
    /*int t,x,n;
    scanf("%d",&t);
    stack<int>s;
    while(t--)
    {
        scanf("%d",&x);
        if(x==1)
        {
            scanf("%d",&n);
            s.push(n);
        }
        else if(x==2)
        {
            if(!s.empty())
              s.pop();
        }
        else
        {
            if(!s.empty())
                printf("%d\n",s.top());
            else
                printf("Empty!\n");

        }

    }*/
    ///O(n)

    int n,x,c=0;
    long long sum=0;
    cin>>n;
    priority_queue<int,vector<int>,greater<int> >pq;

   for(int i=0 ; i<n ; i++)
   {
       cin>>x;

       if(x<0)
            pq.push(x);

       sum+=x;
       c++;

       if(sum<0)
       {
           sum-=(pq.top());
           pq.pop();
           c--;
       }


   }
   cout<<c;
   ///O(nlog(n))





    return 0;
}
