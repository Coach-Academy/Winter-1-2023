#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> Xs(n);
        for (auto &x: Xs) cin >> x;
        int st = 0, en = 1e9;
        while (st <= en) {
            int mi = (st + en) / 2;
            int cnt = 0, R = -1;
            for (auto &x : Xs) {
                if (x <= R) continue;
                cnt++, R = x + mi - 1;
            }
            if (cnt <= k) en = mi - 1;
            else st = mi + 1;
        }
        cout << en + 1 << '\n';
    }
    return 0;
}
