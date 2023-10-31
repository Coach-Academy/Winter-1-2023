//https://vjudge.net/contest/589950#problem/G
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
int n,m;cin>>n>>m;
int arr[m];
rep(m)cin>>arr[i];
sort(arr,arr+m);
int ans = 1e9;
int l=0,r=n-1;
while(r<m){
    ans = min(ans,arr[r]-arr[l]);
    r++,l++;
}
cout<<ans<<endl;
}
