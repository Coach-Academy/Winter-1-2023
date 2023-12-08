// Ada and Spring Cleaning
// https://vjudge.net/problem/SPOJ-ADACLEAN
// Double Hashing
#include <bits/stdc++.h>
using namespace std;

const int P1 = 29, P2 = 31, N = 1e5 + 5, MOD1 = 1e9 + 7, MOD2 = 1e9 + 9;
int inv_p1[N], inv_p2[N];

int add(int a, int b, int mod) {
    return (a + b) % mod;
}

int mul(int a, int b, int mod) {
    return 1ll * a * b % mod;
}

int sub(int a, int b, int mod) {
    return ((a - b) % mod + mod) % mod;
}

int power(int b, int p, int mod) {
    int ans = 1;
    for (; p; p /= 2) {
        if (p & 1)
            ans = mul(ans, b, mod);
        b = mul(b, b, mod);
    }
    return ans;
}

void prepare() {
    inv_p1[N - 1] = power(power(P1, N - 1, MOD1), MOD1 - 2, MOD1);
    for (int i = N - 2; i >= 0; --i)
        inv_p1[i] = mul(inv_p1[i + 1], P1, MOD1);
    inv_p2[N - 1] = power(power(P2, N - 1, MOD2), MOD2 - 2, MOD2);
    for (int i = N - 2; i >= 0; --i)
        inv_p2[i] = mul(inv_p2[i + 1], P2, MOD2);
}

vector<pair<int, int>> compute_hash(string &s) {
    vector<pair<int, int>> hash;
    int value1 = 0, value2 = 0, p1 = 1, p2 = 1;
    for (char c : s) {
        int i = c - 'a' + 1;
        hash.emplace_back();
        auto &[h1, h2] = hash.back();
        h1 = value1 = add(value1, mul(i, p1, MOD1), MOD1);
        h2 = value2 = add(value2, mul(i, p2, MOD2), MOD2);
        p1 = mul(p1, P1, MOD1);
        p2 = mul(p2, P2, MOD2);
    }
    return hash;
}

pair<int, int> substring_hash(vector<pair<int, int>>& hash, int l, int r) {
    auto [h1, h2] = hash[r];
    if (l > 0) {
        auto [l1, l2] = hash[l - 1];
        h1 = sub(h1, l1, MOD1);
        h2 = sub(h2, l2, MOD2);
        h1 = mul(h1, inv_p1[l], MOD1);
        h2 = mul(h2, inv_p2[l], MOD2);
    }
    return {h1, h2};
}

int main() {
    prepare();
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int n, k; string s;
        cin >> n >> k >> s;
        auto hash = compute_hash(s);
        set<pair<int, int>> st;
        for (int i = 0; i + k <= n; ++i)
            st.insert(substring_hash(hash, i, i + k - 1));
        cout << st.size() << '\n';
    }
    return 0;
}