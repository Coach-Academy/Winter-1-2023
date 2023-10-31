//https://vjudge.net/contest/589950#problem/D
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
    int n,k;cin>>n>>k;
    int dif[n];
    long long sum = 0;
    rep(n){
        int o,c;
        cin>>o>>c;
        sum+=c;
        dif[i] = o-c;
    }
    sort(dif,dif+n);
    if(sum>k){
        cout<<-1<<endl;
    }
    else {
        int cnt = n;
        rep(n){
            if(sum+dif[i]<=k){
                cnt--;
                sum+=dif[i];
            }
        }
        cout<<cnt;
    }
    
    




}
