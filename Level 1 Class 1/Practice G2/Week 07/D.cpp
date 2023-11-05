#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    ll n;
    cin >> n;
    ll sum = (n + 1) / 2;
    if (n % 2 == 1)cout << -sum;
    else cout << sum;
    return 0;
}

