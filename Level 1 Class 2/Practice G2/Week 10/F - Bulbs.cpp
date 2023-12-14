#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    set<int> st;
    for (int i = 0; i < n; ++i) {
        int bulbs;
        cin >> bulbs;
        for (int j = 0; j < bulbs; ++j) {
            int bulb;
            cin >> bulb;
            st.insert(bulb);
        }
    }
    st.size() == m ? cout << "YES\n" : cout << "NO\n";
}
