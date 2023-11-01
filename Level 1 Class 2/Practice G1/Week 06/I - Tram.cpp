//https://vjudge.net/contest/589950#problem/I
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
    int n;cin>>n;
    int ans = 0,cur=0;
    rep(n){
        int a,b;cin>>a>>b;
        cur -=a;cur+=b;
        ans = max(ans,cur);
    }
    cout<<ans<<endl;
}
