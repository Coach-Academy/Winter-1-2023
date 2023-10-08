//https://vjudge.net/contest/585426#problem/E
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int n;cin>>n;
    int x=0;
    while(n--){
        int a,b,c;cin>>a>>b>>c;
        x+=(a+b+c)>=2;
    }
   cout<<x;
    return 0;
}







