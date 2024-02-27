#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int ans = 1, pw = 1;
    for (int i = 1; i <= n; i++) {
        if (i > 1) pw = 2LL*pw%mod;
        ans = 1LL*ans*i%mod;
    }
    ans-=pw;
    if (ans < 0) ans+=mod;
    cout << ans << '\n';
    return 0;
}
