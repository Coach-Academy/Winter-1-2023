//https://vjudge.net/contest/586913#problem/J
#include <iostream>
#include "vector"
#include "queue"
#include "set"
#include "map"
#include "algorithm"
#include "stack"
#define endl "\n"
#define itn int
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
    int mn = 1e9,mx =-1e9,mn_idx =0,mx_idx=0;
    for(int i =0;i<n;i++){
        int a;cin>>a;
        if(a>mx){
            mx = a;
            mx_idx = i;
        }
        if(a<=mn){
            mn=a;
            mn_idx=i;
        }
    }
    if(mn_idx<mx_idx)mn_idx++;
    cout<<mx_idx + (n-1)-mn_idx;

}





