#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        vector <int> len(n);
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            len[i] = (x+a-1)/a;
        }
        sort(len.begin(), len.end());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int taken = 1;
            while(i < n && len[i] > taken) taken++, i++;
            if (i < n) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}
