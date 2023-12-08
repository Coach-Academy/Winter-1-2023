// Hashing Application
// Comparing 2 strings and getting the lexicographically smaller in O(log n)
#include <bits/stdc++.h>
using namespace std;

const int P = 29, N = 1e6 + 6, MOD = 1e9 + 7;
int inv_p[N];

int add(int a, int b) {
    return (a + b) % MOD;
}

int mul(int a, int b) {
    return 1ll * a * b % MOD;
}

int sub(int a, int b) {
    return ((a - b) % MOD + MOD) % MOD;
}

int power(int b, int p) {
    int ans = 1;
    for (; p; p /= 2) {
        if (p & 1)
            ans = mul(ans, b);
        b = mul(b, b);
    }
    return ans;
}

void prepare() {
    inv_p[N - 1] = power(power(P, N - 1), MOD - 2);
    for (int i = N - 2; i >= 0; --i)
        inv_p[i] = mul(inv_p[i + 1], P);
}

struct Hash {
    string s;
    vector<int> hash;
    Hash(const string &s) : s(s) {
        int value = 0, p = 1;
        for (char c : s) {
            int i = c - 'a' + 1;
            hash.push_back(value = add(value, mul(i, p)));
            p = mul(p, P);
        }
    }
    int operator()(int l, int r) const {
        int value = hash[r];
        if (l > 0) {
            value = sub(value, hash[l - 1]);
            value = mul(value, inv_p[l]);
        }
        return value;
    }
};

int compare(const Hash &h1, const Hash &h2) {
    int l = 0, r = (int) min(h1.s.size(), h2.s.size()) - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (h1(0, m) == h2(0, m))
            l = m + 1;
        else
            r = m - 1;
    }
    if (h1.s.size() == l and h2.s.size() == l)
        return 0;
    if (h1.s.size() == l)
        return -1;
    if (h2.s.size() == l)
        return +1;
    return h1.s[l] - h2.s[l];
}

int main() {
    prepare();
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    cout << compare(s1, s2) << '\n';
    return 0;
}