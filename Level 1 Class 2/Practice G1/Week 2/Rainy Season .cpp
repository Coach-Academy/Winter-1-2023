//https://vjudge.net/contest/583996#problem/N
#include <iostream>
#include "vector"
#include "queue"
#define endl "\n"
#include "algorithm"
using namespace std;

int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    char a,b,c;cin>>a>>b>>c;
    int ans = (a=='R')+ (b=='R') + (c=='R');
    // RRR = 3, RRS = 2 ,RSR =2,RSS =1,SSS = 0;
    // RSR
    //RRS
    //SRS
    cout<<(ans==3)*3 + (ans==1) + (ans==2)*(2 -(a==c) );
//    if(ans==3)cout<<3;
//    else if(ans==1)cout<<1;
//    else if(ans==0)cout<<0;
//    else{
//        if(a==c)cout<<1;
//        else cout<<2;
//    }




}
