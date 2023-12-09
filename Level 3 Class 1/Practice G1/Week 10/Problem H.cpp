#include <bits/stdc++.h>
using namespace std;

const int P1 = 29, P2 = 31, N = 1e6 + 6, MOD1 = 1e9 + 7, MOD2 = 1e9 + 9;
int inv_p1[N], inv_p2[N];

int add(int a, int b, int mod) {
    a += b;
    return a < mod ? a : a - mod;
}

int mul(int a, int b, int mod) {
    return 1ll * a * b % mod;
}

int sub(int a, int b, int mod) {
    a -= b;
    return a < 0 ? a + mod : a;
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

struct Hash {
    vector<pair<int, int>> hash;
    Hash(const string &s) {
        int cur_h1 = 0, cur_h2 = 0, p1 = 1, p2 = 1;
        for (char c : s) {
            int d = c - 'A' + 1;
            cur_h1 = add(cur_h1, mul(p1, d, MOD1), MOD1);
            cur_h2 = add(cur_h2, mul(p2, d, MOD2), MOD2);
            p1 = mul(p1, P1, MOD1);
            p2 = mul(p2, P2, MOD2);
            hash.emplace_back(cur_h1, cur_h2);
        }
    }
    pair<int, int> operator()(int l, int r) const {
        auto [h1, h2] = hash[r];
        if (l > 0) {
            auto [s1, s2] = hash[l - 1];
            h1 = sub(h1, s1, MOD1);
            h2 = sub(h2, s2, MOD2);
            h1 = mul(h1, inv_p1[l], MOD1);
            h2 = mul(h2, inv_p2[l], MOD2);
        }
        return {h1, h2};
    }
    static void prepare() {
        inv_p1[N - 1] = power(power(P1, N - 1, MOD1), MOD1 - 2, MOD1);
        inv_p2[N - 1] = power(power(P2, N - 1, MOD2), MOD2 - 2, MOD2);
        for (int i = N - 2; i >= 0; --i) {
            inv_p1[i] = mul(inv_p1[i + 1], P1, MOD1);
            inv_p2[i] = mul(inv_p2[i + 1], P2, MOD2);
        }
    }
};

int find_first_not_equal(const Hash &h, int l1, int r1, int l2, int r2) {
    int l = 0, r = r1 - l1 + 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (h(l1, l1 + m) == h(l2, l2 + m))
            l = m + 1;
        else r = m - 1;
    }
    return l;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    Hash::prepare();
    int n, Q; string s;
    cin >> n >> s >> Q;
    Hash h(s);
    for (int l1, r1, l2, r2; Q--; ) {
        cin >> l1 >> r1 >> l2 >> r2;
        if (r1 - l1 != r2 - l2) {
            cout << "DIFFERENT\n"; continue;
        }
        --l1; --r1; --l2; --r2;
        if (h(l1, r1) == h(l2, r2)) {
            cout << "SIMILAR\n"; continue;
        }
        int p = find_first_not_equal(h, l1, r1, l2, r2);
        if (l1 + p + 1 > r1) {
            cout << "SIMILAR\n"; continue;
        }
        cout << (h(l1 + p + 1, r1) == h(l2 + p + 1, r2) ? "SIMILAR\n" : "DIFFERENT\n");
    }
    return 0;
}