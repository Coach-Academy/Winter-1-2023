#include <bits/stdc++.h>

using namespace std;


const int mod = 1e9+7;

int mpow(int a, int b, int m)
{
    int res = 1;
    while(b) {
        if (b&1) res = 1LL*res*a%m;
        a = 1LL*a*a%m, b/=2;
    }
    return res;
}

const int N = 2e5+10;
int fact[N], invfact[N];
void pre()
{
    fact[0] = invfact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = 1LL*fact[i-1]*i%mod;
        invfact[i] = mpow(fact[i], mod-2, mod);
    }
}

int nCr(int n, int r)
{
    if (r > n) return 0;
    return 1LL*fact[n]*invfact[r]%mod*invfact[n-r]%mod;
}

int main() {
    int _t; cin >> _t;
    pre();
    while(_t--) {
        int n, m, k; cin >> n >> m >> k;
        vector <int> frq(n+1, 0);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            frq[x]++;
        }
        int ans = 0;
        for (int mx = 1; mx <= n; mx++) {
            frq[mx]+=frq[mx-1];
            if (frq[mx]-frq[mx-1] == 0) continue;
            int cnt = frq[mx]-(mx-k-1 >= 0 ? frq[mx-k-1] : 0);
            ans+=nCr(cnt, m)-nCr(cnt-(frq[mx]-frq[mx-1]), m);
            if (ans >= mod) ans-=mod;
            if (ans < 0) ans+=mod;
        }
        cout << ans << '\n';
    }
    return 0;
}
