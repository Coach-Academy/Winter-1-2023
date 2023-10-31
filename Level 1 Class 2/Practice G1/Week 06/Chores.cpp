//https://vjudge.net/contest/589950#problem/E
#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#define endl "\n"
#define itn int
#define rep(n) for(int i =0;i<n;i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,m,k;cin>>n>>m>>k;
    long long time =0;
    rep(n){
        int a;cin>>a;
        if(i<n-m)time+=a;
        else time +=k;
    }
    cout<<time;






}
