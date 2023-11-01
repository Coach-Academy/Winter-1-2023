//https://vjudge.net/contest/589950#problem/J
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
int n;
bool is_equal(int a[],int b[]){
    rep(n){
        if(a[i]!=b[i])return false;
    }
    return true;
}
int solve(int arr[]){
    int temp[n];
    rep(n)temp[i]=i+1;
    int cnt = 0;
    while(!is_equal(temp,arr)){
        cnt++;
        next_permutation(temp,temp+n);
    }
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin>>n;
    int a[n],b[n];
    rep(n)cin>>a[i];
    rep(n)cin>>b[i];
    cout<<abs(solve(a)-solve(b));
}

