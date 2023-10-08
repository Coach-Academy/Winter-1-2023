//https://vjudge.net/contest/583996#problem/K
#include <iostream>
#include "vector"
#include "queue"
#define endl "\n"
#include "algorithm"
using namespace std;

int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    long long n,k;cin>>n>>k;
    long long odd =(n+1)/2;
    if(k<=odd){
        cout<<k*2 -1;
    }
    else {
        k-=odd;
        cout<<k*2;
    }
}

