#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1073741824;
const int N = 1e6+1;
bool isNotPrime[N];
ll ans[N];
void pre() {
    for (int i = 2; i < N; i++) {
        if (isNotPrime[i]) continue;
        ans[i]+=i;
        for (ll j = 1LL*i*i; j < N; j+=i) {
            isNotPrime[j] = true;
        }
    }
    for (int i = 1; i < N; i++) ans[i]+=ans[i-1];
}

int main() {
    pre();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << ans[n] << '\n';
    }
    return 0;
}
