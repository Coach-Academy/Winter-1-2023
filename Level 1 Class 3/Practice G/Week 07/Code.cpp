#include <bits/stdc++.h>

using namespace std;

int main()
{



   /// problme A
       /*
       int n;
        cin >> n;
        int sum=0;
        for (int i = 1; i <= n; i++)
        {
           sum+=i;
        }
        cout<<sum<<"\n"; //o(n)



        cout<<n*(n+1)/2; //o(1)*/

    /// problem b

     /*   int n;
        cin >> n;
        cout<<25;*/

      /*  if(int(pow(5,2))==25)
        {
            cout<<"Yes";
        }*/

        /// problem D

      /*  long long int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2;
        }
        else
        {
            cout<<-(n+1)/2;
        }*/

       /* int n;
        cin>>n;
        /*5
        rrggr*/
       /* char c1,c2;
        cin>>c2;
        //cout<<c1<<" "<<c2<<"\n";
        int sum=0;
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>>c1;
            if(c1==c2)
            {
                sum++;
            }
            c2=c1;
        } /// time complexity O(n)
        ///space complexity O(n) /// O(1)
        cout<<sum;*/

        /// problem I
      /*  int t;
        cin>>t;
        while(t--)
        {
            int n,d,x,flag=0;
            int mn1=INT_MAX,mn2=INT_MAX;
            cin>>n>>d;
            for(int i=0 ; i<n ; i++)
            {
               // 1234
                cin>>x;
                if(x<=mn1)
                {
                    mn2=mn1;
                    mn1=x;

                }else if(x<=mn2)
                {
                    mn2=x;
                }

                if(x>d)
                    flag=1;
            }
            if(flag==0)
            {
                cout<<"YES\n";
            }
            else
            {
                if(mn1+mn2<=d)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }


        }*/
       /* int n;
        cin>>n;
        int a[n];
        long long int sum=0;
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        long long x=0;
        cin>>x;


        long long num=(x/sum)*n;
        x=x-(x/sum)*sum;

        for(int i=0 ; i<n ; i++)
        {
           num++;
           x=x-a[i];

            if(x<0)
                break;

        }
        cout<<num;*/

        /// problem K

        int n;
        int top,down,right,left,flag=0;
        cin>>n;
        cin>>top;
        down=7-top;

        for(int i=0 ; i<n ; i++)
        {
            cin>>left>>right;

            if(left==top || left==down || right==down || right==top)
            {
                flag=1;
            }
        }

        if(flag)
            cout<<"NO";
        else
            cout<<"YES";












    return 0;
}
