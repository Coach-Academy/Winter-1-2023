#include <iostream>
#include "vector"
#include "queue"
#define endl "\n"
#include "algorithm"
using namespace std;
// https://vjudge.net/contest/583996#problem/G
int main() {
    cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
    int n;cin>>n;
    cout<<(((n/100)==n%10)?"Yes":"No");

}

