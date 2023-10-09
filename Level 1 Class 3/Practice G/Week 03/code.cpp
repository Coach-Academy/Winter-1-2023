#include <bits/stdc++.h>

using namespace std;

int main()
{

/// problem D
   /* int n;
    string s;
    cin>>n;
    int x=0;
    for(int i=1 ; i<=n ; i++)
    {
        cin>>s;
        if(s=="++X" || s=="X++")
        {
            ++x;
        }
        else
        {
            --x;

        }
    }






    cout<<x;*/

    ///problem E
/*
    int n,p,res=0,sum=0;
    cin>>n;
    while(n--)
    {
        sum=0;
        for(int i=0 ; i<3 ; i++)
        {
            cin>>p;
            sum+=p;

        }

        if(sum>=2)
            res++;
    }
    cout<<res;*/
   /// problem  f

   /* int a,b,years=0;
    cin>>a>>b;



    while(a<=b)
    {
        years++;
       a*=3;
       b*=2;

    }
    cout<<years;*/



   ///problem G

   /*int n,k;
   cin>>n>>k;

   while(k--)
   {
       if(n%10==0)
       {
           n/=10;
       }
       else
       {
           n--;
       }
   }
   cout<<n;*/

   ///problem H

  /* int n,ans=0;
//   0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
   for(int i=1;i<=5 ; i++)
   {
       for(int j=1 ; j<=5 ; j++)
       {
          cin>>n;
          if(n==1)
          {
             /*i=2,j=2;
             i=3,j=3; */
          /*   if(i>=3)
                ans+=(i-3);
              else
                ans+=(3-i);


             if(j>=3)
                ans+=j-3;
             else
                ans+=3-j;

          }
       }
   }
   cout<<ans;*/

   ///problem I

  /* int n,height=0,i=1,res=0;
   cin>>n;

   while(n>=0)
   {
       res+=i;
       n-=res;
       height++;
       i++;

   }
   cout<<--height;*/


  /* int n,sum=0,ans=0;
    cin>>n;
    for(int i = 1 ;n>=0;i++)
    {
        for(int j = 1 ;j<=i;j++ )
        {
           sum += j;
        }
        n -= sum;
        cout<<i<<" "<<n<<"\n";
        ans=i;
        if(n <0)
        {
          break;
        }
    }
   // cout<<n;
    cout<<--ans;*/



    ///problem k
   /* int n;
    cin>>n;
    int flag=0;

    for(int i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        {

            int temp=i;
            int x;
            flag=0;
            while(temp)
            {

            x=temp%10;
            if(x!=4 && x!=7)
            {
               flag=1;
               break;
            }
            temp=temp/10;
            }

            if(flag==1)
                continue;
            else
            {
               cout<<"YES";
               break;
            }
        }
    }


    if(flag==1)
        cout<<"NO";*/
        
        

        ///problem j
      /*  int n,four=0,three=0,two=0,one=0,x;
        cin>>n;
        for(int i=0 ; i<n ; i++)
        {
            cin>>x;
            if(x==4)
                four++;
            else if(x==3)
                three++;
            else if(x==2)
                two++;
            else
                one++;
        }
        int cars=four;

        if(three>=one)
        {
            cars+=three;
            one=0;
        }
        else
        {
            cars+=three;
            one-=three;
        }


        cars+=two/2;

        two=two%2;

        if(one<=2)
        {
            if(one>0 || two>0)
                cars++;
        }
        else
        {
            if(two==1)
            {
                one-=2;
                cars++;
            }

            cars+=one/4;

            if(one%4!=0)
                cars++;
        }

        cout<<cars;*/





















    return 0;
}
