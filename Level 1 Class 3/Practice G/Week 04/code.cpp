#include <bits/stdc++.h>

using namespace std;

int main()
{




///Problem C
/*
int n,a,b;
cin>>n;
int d[n];
for(int i=0 ; i<n-1 ; i++)
{
    cin>>d[i];
}
cin>>a>>b;
a--;
b--;
int res=0;
for(int i=a ; i<b ; i++)
{
    res+=d[i];
}

cout<<res;*/


    //R1--5--R2--6--R3

    ///problem E
    /*int n,k,sum=0;
    cin>>n>>k;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]>=a[k-1] && a[i]!=0)
        {
            sum++;
        }
    }
    cout<<sum;*/

    ///problem F

    /*
    int t;
    cin>>t;
    while(t--)
    {
        int n,bad=0;
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        int mn=a[n-1];

        for(int i=n-1 ; i>=0 ; i--)
        {
            if(a[i]<=mn)
                mn=a[i];
            else{
                bad++;
            }

        }



         cout<<bad<<"\n";

    4 5 10

    }*/

    ///problem G

    /*int n;
     cin>>n;
     int s;
     int res=1;
     int temp;
     cin>>temp;
    for(int i=1 ; i<n  ;i++)
    {
        cin>>s;
        if(s!=temp)
            res++;

        temp=s;

    }

    cout<<res;*/









   //cout<<res;


   ///probelm I
/*
   int n;
   cin>>n;
   int wires[n];
   for(int i=0 ; i<n ; i++)
    cin>>wires[i];

   int shots,x,y;
   cin>>shots;
   for(int i=0 ; i<shots ; i++)
   {

       cin>>y>>x;
       y--;

       if(y<n-1)
        wires[y+1]+=wires[y]-x;
       if(y>0)
        wires[y-1]+=x-1;

       wires[y]=0;

   }

   for(int i=0 ; i<n ; i++)
    cout<<wires[i]<<"\n";*/


    ///problem J

   /* int n;
    cin>>n;
    int height;
    int mx=0,mxidx,mn=101,mnidx;
    for(int i=0 ; i<n ; i++)
    {
        cin>>height;

        if(height<=mn)
        {
            mn=height;
            mnidx=i;
        }

        if(height>mx)
        {
            mx=height;
            mxidx=i;
        }
    }



    int moves=0;
    moves+=n-mnidx-1;
    moves+=mxidx;

    if(mxidx>mnidx)
        moves--;

    cout<<moves;
*/

/// problem K
/*
int a[3][3];
int b[3][3];

for(int i=0 ; i<3 ; i++)
{
    for(int j=0 ; j<3; j ++)
    {
        cin>>a[i][j];


    }
}

int clicks;
for(int i=0 ; i<3 ; i++)
{
    for(int j=0 ; j<3 ; j++)
    {

        clicks=a[i][j];

        if(i>0)
            clicks+=a[i-1][j];
        if(i<2)
            clicks+=a[i+1][j];
        if(j>0)
            clicks+=a[i][j-1];
        if(j<2)
            clicks+=a[i][j+1];

        if(clicks%2==1)
        {

            b[i][j]=0;
        }
        else{
        b[i][j]=1;
        }

    }
}
for(int i=0 ; i<3 ; i++)
{
    for(int j=0 ; j<3; j ++)
    {
        cout<<b[i][j];

    }
    cout<<"\n";
}*/

/// probelm L

/* int n,a[51];
   int t=1;

   while(cin>>n)
   {

   int sum=0;
   for(int i=0 ; i<n ; i++)
   {
       cin>>a[i];
       sum+=a[i];
   }

   int avg=sum/n;
   int res=0;
   for(int i=0 ; i<n ; i++)
   {
       if(a[i]>avg)
        res+=a[i]-avg;
   }
   cout<<"Set #"<<t<<"\n";
   t++;
   cout<<"The minimum number of moves is "<<res<<".\n\n";
}*/










    return 0;
}
