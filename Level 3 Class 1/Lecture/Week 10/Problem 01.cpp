// Pattern Find
// https://vjudge.net/problem/SPOJ-NAJPF
// Single Hashing
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

vector<int> compute_hash(string &s) {
    vector<int> hash;
    int value = 0, p = 1;
    for (char c : s) {
        int i = c - 'a' + 1;
        hash.push_back(value = add(value, mul(i, p)));
        p = mul(p, P);
    }
    return hash;
}

int substring_hash(vector<int>& hash, int l, int r) {
    int value = hash[r];
    if (l > 0) {
        value = sub(value, hash[l - 1]);
        value = mul(value, inv_p[l]);
    }
    return value;
}

int main() {
    prepare();
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        string s1, s2;
        cin >> s1 >> s2;
        int h = compute_hash(s2).back();
        auto hash = compute_hash(s1);
        vector<int> matches;
        for (int i = 0; i + (int) s2.size() <= (int) s1.size(); ++i) {
            int sh = substring_hash(hash, i, i + (int) s2.size() - 1);
            if (h == sh)
                matches.push_back(i);
        }
        if (matches.empty())
            cout << "Not Found\n";
        else {
            cout << matches.size() << '\n';
            for (int i : matches)
                cout << i + 1 << ' ';
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}