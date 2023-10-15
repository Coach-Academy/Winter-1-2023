//https://vjudge.net/contest/586913#problem/I
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
    int arr[n+2];
    for(int i =1;i<=n;i++)cin>>arr[i];
    int k;cin>>k;
    for(int i =0;i<k;i++){
        int a,b;cin>>a>>b;
        arr[a-1]+=b-1;
        arr[a+1] += arr[a]-b;
        arr[a]=0;
    }
    for(int i =1;i<=n;i++)cout<<arr[i]<<endl;

}



