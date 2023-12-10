#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        set<char> st;
        for (auto &ch: s1)
            st.insert(ch);
        bool ans = 0;
        for (auto &ch: s2)
            if (st.find(ch) != st.end()) // exist
                ans = 1;
        ans ? cout << "YES\n" : cout << "NO\n";
    }
}
