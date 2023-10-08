#include <iostream>
#include "vector"
#include "queue"
#define endl "\n"
#include "algorithm"
using namespace std;
// https://vjudge.net/contest/583996#problem/E
int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    long long n,m,a;cin>>n>>m>>a;
    long long  l = n/a +(n%a!=0),w =m/a +(m%a!=0) ;
    cout<<l*w;


}


