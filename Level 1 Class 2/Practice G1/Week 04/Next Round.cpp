//https://vjudge.net/contest/586913#problem/E
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
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i = 0;i<n;++i){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i =0;i<n;i++){
        if(arr[i]>0&&arr[i]>=arr[k-1])cnt++;
    }
    cout<<cnt;

}



