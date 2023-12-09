#include <bits/stdc++.h>
using namespace std;

const int P = 53, MOD = 1e9 + 7;

int add(int a, int b) {
    a += b;
    return a < MOD ? a : a - MOD;
}

int mul(int a, int b) {
    return 1ll * a * b % MOD;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    for (string s; cin >> s; ) {
        int l = (int) s.size() - 1, h0 = 0, h1 = 0, p = 1;
        for (int i = (int) s.size() - 1; i >= 0; --i) {
            int d = isupper(s[i]) ? s[i] - 'A' + 1 : s[i] - 'a' + 26 + 1;
            h0 = add(mul(h0, P), d);
            h1 = add(h1, mul(p, d));
            p = mul(p, P);
            if (h0 == h1)
                l = i;
        }
        cout << s;
        s = s.substr(0, l);
        reverse(s.begin(), s.end());
        cout << s << '\n';
    }
    return 0;
}