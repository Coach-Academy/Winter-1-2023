#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector <pair<int, int>> seg(n);
        for (auto &[x, y] : seg) cin >> x >> y;
        int st = 0, en = 1e9;
        while(st <= en) {
            int mi = (st+en)/2;
            long long L = 0, R = mi;
            bool bad = false;
            for (auto &[l, r] : seg) {
                L = max(1LL*l, L);
                R = min(1LL*r, R);
                if (L > R) bad = true;
                L-=mi, R+=mi;
            }
            if (bad) st = mi+1;
            else en = mi-1;
        }
        cout << en+1 << '\n';
    }
    return 0;
}
