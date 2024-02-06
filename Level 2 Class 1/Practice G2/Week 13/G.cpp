#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector <int> a(n), w(k);
        for (auto &i : a) cin >> i;
        for (auto &i : w) cin >> i;
        sort(a.rbegin(), a.rend());
        sort(w.rbegin(), w.rend());
        long long ans = 0;
        int p = 0;
        while(!w.empty() && w.back() == 1) w.pop_back(), ans+=2*a[p++];
        for (auto &i : w) {
            ans+=a[p]+a.back();
            while(--i) a.pop_back();
            p++;
        }
        cout << ans << '\n';
    }
    return 0;
}
