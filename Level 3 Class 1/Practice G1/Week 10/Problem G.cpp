#include <bits/stdc++.h>
using namespace std;

const int P1 = 29, P2 = 31, N = 1e3 + 3, MOD1 = 1e9 + 7, MOD2 = 1e9 + 9;
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

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    Hash::prepare();
    for (string s; getline(cin, s); ) {
        string tmp;
        for (char c : s)
            if (c != ' ')
                tmp += c;
        s = tmp;
        Hash h(s);
        int n = (int) s.size();
        for (int l = 1; l <= n; ++l) {
            map<pair<int, int>, int> freq;
            for (int i = 0; i + l <= n; ++i)
                ++freq[h(i, i + l - 1)];
            int mx_freq = 1;
            for (auto [_, f] : freq)
                mx_freq = max(mx_freq, f);
            if (mx_freq == 1) {
                cout << '\n'; break;
            }
            cout << mx_freq << '\n';
        }
    }
    return 0;
}