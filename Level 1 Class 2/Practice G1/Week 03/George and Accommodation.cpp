//https://vjudge.net/contest/585426#problem/C
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
   int n;cin>>n;
   int cnt = 0;
   for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    cnt+=(b-a>=2);
   }

   cout<<cnt;
    return 0;
}







