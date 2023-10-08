//https://vjudge.net/contest/583996#problem/H
#include <iostream>
#include "vector"
#include "queue"
#define endl "\n"
#include "algorithm"
using namespace std;

int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int a,b;cin>>a>>b;
    if(b<=a*500)cout<<"Yes";
    else cout<<"No";
}

