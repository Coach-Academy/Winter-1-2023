#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        set<int> st;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            int s;
            cin >> s;
            st.insert(s);
        }
        int ans = 0;
        for (int i = 0; i < m; ++i) {
            int s;
            cin >> s;
            if (st.count(s))
                ans++;
        }
        cout << ans << endl;
    }
}
