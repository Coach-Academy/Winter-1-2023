#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector <int> pref(n+1);
        for (int i = 1; i <= n; i++) {
            char c; cin >> c;
            pref[i] = pref[i-1];
            if (c == '+') pref[i]++;
            else pref[i]--;
        }
        vector <int> mxPref(n+1), mnPref(n+1), mxSuf(n+1), mnSuf(n+1);
        for (int i = 0; i <= n; i++) {
            mxPref[i] = mnPref[i] = pref[i];
            if (i > 0) {
                mxPref[i] = max(mxPref[i], mxPref[i-1]);
                mnPref[i] = min(mnPref[i], mnPref[i-1]);
            }
        }
        for (int i = n; ~i; i--) {
            mxSuf[i] = mnSuf[i] = pref[i];
            if (i < n) {
                mxSuf[i] = max(mxSuf[i], mxSuf[i+1]);
                mnSuf[i] = min(mnSuf[i], mnSuf[i+1]);
            }
        }
        while(m--) {
            int l, r; cin >> l >> r;
            int sm = pref[r]-pref[l-1];
            int mx = max(mxPref[l-1], (r < n ? mxSuf[r+1]-sm : -(int)2e9));
            int mn = min(mnPref[l-1], (r < n ? mnSuf[r+1]-sm : (int)2e9));
            cout << mx-mn+1 << '\n';
        }
    }
    return 0;
}
