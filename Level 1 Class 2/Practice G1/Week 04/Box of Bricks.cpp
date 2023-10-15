//https://vjudge.net/contest/586913#problem/L
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
int cnt = 1;
while(true){
    int n;cin>>n;
    if(n==0)break;
    int arr[n];
    int sum =0,avg =0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    avg = sum/n;
    int ans =0;
    for(int i =0;i<n;i++){
        ans+=abs(avg-arr[i]);
    }
    cout<<"Set #"<<cnt++<<"\nThe minimum number of moves is "<<ans/2<<".\n\n";
}


}
