//https://vjudge.net/contest/583996#problem/M
#include <iostream>
#include "vector"
#include "queue"
#define endl "\n"
#include "algorithm"
using namespace std;

int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int v,t,s,d;cin>>v>>t>>s>>d;
    if(v*t<=d&&v*s>=d)cout<<"No";
    else cout<<"Yes";

}
