//https://vjudge.net/contest/586913#problem/G
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
    int cnt =0,prev = 0,cur;
    while(n--) {
        cin>>cur;
        if(cur!=prev)cnt++;
        prev = cur;
    }
    cout<<cnt<<endl;

}



