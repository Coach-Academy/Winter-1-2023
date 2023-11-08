#include <bits/stdc++.h>


using namespace std;

int main()
{
 /* int n;
  cin>>n; 100
  int a[n];

  [7,6,4534534,5345,43534,9]

  a[37];
  for(int i=0 ; i<n ; i++)
    cin>>a[0]
  */

  /* vector<int> v;
   cout<<v.empty()<<"\n";
   int x;

   for(int i=0 ; i<3 ; i++)
   {
       cin>>x;
       v.push_back(x);
   }
   cout<<v.size()<<"\n";
   for(int i=0 ; i<3 ; i++)
   {
       cout<<v[i]<<" ";
   }
   v.pop_back();

   cout<<v.empty()<<"\n";
   vector<int> v2(3,9);

   v.swap(v2);
   */
  /* vector<int> v1(3,4);
   vector<int>v2(3,6);
   for(int i=0;  i<3 ; i++)
    cout<<v1[i]<<" ";

    cout<<"\n";

   for(int i=0;  i<3 ; i++)
    cout<<v2[i]<<" ";

    cout<<"\n";

   v1.swap(v2);
   for(int i=0;  i<3 ; i++)
    cout<<v1[i]<<" ";

    cout<<"\n";

   for(int i=0;  i<3 ; i++)
    cout<<v2[i]<<" ";

    cout<<"\n";

    swap(v1,v2);


    for(int i=0;  i<3 ; i++)
    cout<<v1[i]<<" ";

    cout<<"\n";

   for(int i=0;  i<3 ; i++)
    cout<<v2[i]<<" ";

    cout<<"\n";


    for(int i=0 ; i<v.size(); i++)
    {
        swap(v[i],v2[i]);
    }*/

   // vector<int>v(3,4);
   // for(auto element:v)
    //    cout<<element<<" ";

    /*vector<int>v;
    for(int i=0 ; i<4 ; i++)
        v.push_back(i);

    vector<int>::reverse_iterator it=v.rbegin();
    while(it!=v.rend())
    {
        cout<<*it<<" ";
        it++;
    }*/
   /* vector<int>v;
    for(int i=0 ; i<4 ; i++)
        v.push_back(i);

    v.insert(v.begin()+0,16);

    for(int i=0 ; i<5 ; i++)
        cout<<v[i]<<" ";*/

        ///problem Array O(n)

      /*  int n,x,neg=0,pos=0;
        vector<int>zeros;
        cin>>n;


        for(int i=0 ; i<n ; i++)
        {
            cin>>x;
            if(x<0 && neg==0)
            {
                neg=x;
            }
            else if(x>0 && pos==0)
            {
                pos=x;
            }
            else{
                zeros.push_back(x);
            }
        }



        if(pos==0)
        {
            vector<int> ppos;
            vector<int>z;
            for(int i=0 ; i<zeros.size() ; i++)
            {
                if(zeros[i]<0 && ppos.size()<2)
                {
                    ppos.push_back(zeros[i]);
                }
                else
                {
                    z.push_back(zeros[i]);
                }

            }
    cout<<1<<" "<<neg<<"\n";
   cout<<2<<" "<<ppos[0]<<" "<<ppos[1]<<"\n";
   cout<<z.size();
   for(int i=0 ; i<z.size(); i++)
   {
       cout<<" "<<z[i];
   }
        }
        else
        {
   cout<<1<<" "<<neg<<"\n";
   cout<<1<<" "<<pos<<"\n";
   cout<<zeros.size();
   for(int i=0 ; i<zeros.size(); i++)
   {
       cout<<" "<<zeros[i];
   }
        }*/


        /// problem Ada and Queue

      /*  int n,num,f=1; /// O(n)
        string s;
        deque<int> dq;
        cin>>n;
        while(n--)
        {
            cin>>s;

            if(s=="toFront")
            {
                cin>>num;

                if(f)
                  dq.push_front(num);
                else
                  dq.push_back(num);

            }
            else if(s=="front")
            {
                if(dq.empty())
                    cout<<"No job for Ada?\n";
                else
                {
                    if(f)
                    {


                    cout<<dq.front()<<"\n";
                    dq.pop_front();
                    }
                    else
                    {
                        cout<<dq.back()<<"\n";
                    dq.pop_back();
                    }
                }
            }
            else if(s=="back")
            {
                 if(dq.empty())
                    cout<<"No job for Ada?\n";
                else
                {
                    if(f)
                    {
                    cout<<dq.back()<<"\n";
                    dq.pop_back();
                    }
                    else
                    {
                        cout<<dq.front()<<"\n";
                    dq.pop_front();
                    }
                }
            }
            else if(s=="push_back")
            {
                 cin>>num;

                if(f)
                 dq.push_back(num);
                else
                  dq.push_front(num);
            }
            else if(s=="reverse")
            {
                 f=!f;
            }



        }*/


    return 0;
}
