#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    while (q--) {
        set<int, greater<>> st;
        int n, r;
        cin >> n >> r;
        for (int i = 0; i < n; ++i) {
            int s;
            cin >> s;
            st.insert(s);
        }
        int bomb = 0;
        for (auto &s: st) {
            if (s - (bomb * r) > 0) {
                bomb++;
            }
        }
        cout << bomb << endl;
    }
}
