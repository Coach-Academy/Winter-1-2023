#include <bits/stdc++.h>

using namespace std;

int main()
{
   /*0<n<1000
    int n;
    n=5;

    int a[1001]={1,2,3,124,500,60};
              0 1 2 3 4 5*/


              /*int n;
              0<n<1000
              cin>>n;*/
              /*int x[10];
              cout<<x[9];*/

             // int a[3][3];
             // 1000000000
             // int a[20000][10];
              /// 1 2 3 4 5 6 7 8




    /*for(int i = 0;i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin>>a[i][j];
        }

    }


     for(int i = 0;i<3 ; i++)
    {
             cout<<a[i][i]<<" ";


    }













/*

for(int i=0 ; i<3 ; i++)
{


cout<<a[i]<<" ";
}

  0 1 2 3
  4 5 6 7
  6 7 8 9
  6 9 5 8

  int a[3][2]={{1,2},{3,4},{5,6}}

*/


   // cout<<a[2];*/




    //cin>>n;



  /*  /// problem A
    int n;
   cin>>n;
    int arr[n+1],l,r;

    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    cin>>l>>r;
    l--;
    r--;

    for(int i=l ; i<=r ;i++ )
        cout<<arr[i]<<" ";*/


        ///problem B
       /* 1 1 1 1 1
        1 2 3 4 5
        1 3 6 10 15
        1 4 10 20 35
        1 5 15 35 70
        */

       /* int n;
        cin>>n;
        int a[11][11];

        for(int i=0 ; i<n ;i++)
        {
            a[0][i]=1;
            a[i][0]=1;
        }
        for(int i=1 ; i<n ; i++ )
        {
            for(int j=1 ; j<n ; j++)
            {
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }

        cout<<a[n-1][n-1];*/
      //  a[n][n];

      ///problem H
      /*
      k =0





       */

    /*  int t;
      cin>>t;
      while(t--)
      {
          int n,a[31],b[31],k;
          cin>>n>>k;

          for(int i=0 ; i<n ; i++)
            cin>>a[i];

          for(int i=0 ; i<n ; i++)
            cin>>b[i];




        sort(a,a+n);
        sort(b,b+n);

       /* n=4

         k=1;
        8                         2 3 4
        sum=8;

        2 4 6 1*/

      /*  int sum=0;
        for(int i=0 ; i<k ; i++)
        {
            if(a[i]<b[n-1-i])
                sum+=b[n-1-i];
            else
                sum+=a[i];
        }



        for(int i=k ; i<n ; i++ )
            sum+=a[i];


        cout<<sum<<"\n";



      }*/




    return 0;
}
