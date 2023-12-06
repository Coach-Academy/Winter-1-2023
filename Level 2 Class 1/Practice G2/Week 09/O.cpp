#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n;
    while(cin >> n, n) {
        for (ll i = 2; i*i <= n; i++) {
            if (n%i) continue;
            int pw = 0;
            while(n%i == 0) n/=i, pw++;
            cout << i << '^' << pw << ' ';
        }
        if (n > 1) cout << n << '^' << 1;
        cout << '\n';
    }
    return 0;
}
