#include <bits/stdc++.h>

using namespace std;

int mpow(int a, int b, int m) {
    int res = 1;
    while(b) {
        if (b&1) res = 1LL*res*a%m;
        a = 1LL*a*a%m, b/=2;
    }
    return res;
}

int inv(int n, int m) {
    return mpow(n, m-2, m);
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector <int> a(n);
        for (auto &i : a) cin >> i;
        string s; cin >> s;
        int l = 0, r = n-1; // finally: l > r
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') l++;
            else r--;
        }
        vector <int> ans(n+1, 1);
        for (int i = n-1; ~i; i--) {
            ans[i] = ans[i+1];
            if (s[i] == 'L') {
                l--;
                ans[i]*=a[l];
                ans[i]%=m;
            }
            else {
                r++;
                ans[i]*=a[r];
                ans[i]%=m;
            }
        }
        for (int i = 0; i < n; i++) cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}
