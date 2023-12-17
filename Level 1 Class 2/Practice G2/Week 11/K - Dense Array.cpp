#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            if (i > 0) {
                int mx = max(v[i], v[i - 1]), mn = min(v[i], v[i - 1]);
                while (mn * 2 < mx) {
                    mn *= 2;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
