#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector <int> a(n);
        ll sm = 0;
        for (auto &i : a) cin >> i, sm+=i;
        vector <ll> pref(n);
        pref[0] = a[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i-1]+a[i];
        }
        for (int i = 1; i < n; i++) {
            pref[i] = max(pref[i], pref[i-1]);
        }
        while(m--) {
            int x; cin >> x;
            int st = 0, en = n-1;
            while(st <= en) {
                int mi = (st+en)/2;
                if (pref[mi] >= x) en = mi-1;
                else st = mi+1;
            }
            en++;
            if (en == n) { // take the whole array sometimes
                if (sm <= 0) cout << "-1 ";
                else {
                    ll ans = n*((x - pref.back()+sm-1) / sm)-1;
                    x-=((x - pref.back()+sm-1) / sm)*sm;
                    int st = 0, en = n-1;
                    while(st <= en) {
                        int mi = (st+en)/2;
                        if (pref[mi] >= x) en = mi-1;
                        else st = mi+1;
                    }
                    if (x) ans+=1+en+1;
                    cout << ans << ' ';
                }
            }
            else {
                cout << en << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
