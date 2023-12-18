#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int q; cin >> q;
    while(q--) {
        int n; cin >> n;
        int ans = 0;
        string s;
        bool ok = true;
        for (int i = 1; ok; i++) {
            s.push_back('1');
            for (int d = 1; d < 10; d++) {
                if (1LL*d*stoi(s) > n) {
                    ok = false;
                    break;
                }
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
