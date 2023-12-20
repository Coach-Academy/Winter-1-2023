#include <bits/stdc++.h>

using namespace std;
/*
int power(int num,int p)
{
   if(p==0)
    return 1;
            (5*(5 * (5 * 1)))
   return num*power(num,p-1);

}*/

int fact(int n)
{
    if(n==0)
        return 1;

   return n*fact(n-1);
}

int main()
{

 /* int res=power(5,3);
  cout<<res<<"\n";*/


  cout<<fact(5);


    return 0;
}
