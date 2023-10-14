//https://vjudge.net/contest/586913#problem/C
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
int arr[n];
arr[0] = 0;
for(int i=1;i<n;i++){
    cin>>arr[i];
}
int start,target;
cin>>start>>target;
int years = 0;
while(start<target){
    years+=arr[start];
    start++;
}
cout<<years;
}


