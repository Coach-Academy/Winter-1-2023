#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll sumDig(ll n) {
    ll res = 0;
    while(n) {
        res+=n%10;
        n/=10;
    }
    return res;
}

int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        while(true) {
            if (__gcd(n, sumDig(n)) > 1) {
                cout << n << '\n';
                break;
            }
            n++;
        }
    }
    return 0;
}
