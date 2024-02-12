#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5+7, mod = 1e9+7;
int mul(int a, int b) {
    return (1LL * a * b) % mod;
}

int add(int a, int b) {
    a = (a + mod) % mod;
    b = (b + mod) % mod;
    return (a + b) % mod;
}

int fp(int b, int p) {
    if (b == 1 or p == 0)
        return 1;

    int ret = fp(b, p >> 1);
    ret = mul(ret, ret);

    if (p & 1)
        ret = mul(ret, b);

    return ret;
}

ll modInv(ll n) {
    return fp(n, mod - 2);
}

ll fact[N], inv[N];

void pre() {
    fact[0] = inv[0] = 1;
    for (ll i = 1; i < N; i++)
        fact[i] = (fact[i - 1] * i) % mod, inv[i] = fp(fact[i], mod - 2);
}

ll nCr(ll n, ll r) {
    return ((fact[n] * inv[r]) % mod * inv[n - r]) % mod;
}

ll nPr(ll n, ll r) {
    return ((fact[n] * inv[n - r])) % mod;
}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    pre();
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a,a+n);
        int j = 0;
        ll ans =0;
        for (int i = 0; i < n; ++i) {

            while (j+1 < n && a[j+1]-a[i] <= k)
                j++;

            int x = j - i;
            if ( x >= m-1)
            {
                ans = add(ans , nCr(x , m-1));
            }
        }
        cout << ans << endl;
    }
    return 0;
}