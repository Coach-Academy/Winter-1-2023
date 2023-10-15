//https://vjudge.net/contest/586913#problem/F
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
int t;cin>>t;
while(t--){
    int n;cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)cin>>arr[i];
    int cnt =0;
    int mn = arr[n-1];
    for(int i =n-1;i>=0;i--){
        if(arr[i]>mn)cnt++;
        else mn = arr[i];
    }
    cout<<cnt<<endl;
}
}
