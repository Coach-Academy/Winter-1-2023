/*
 * Problem: B - Distinct Characters Queries
 * Solution using `set` for each letter that holds the indices of
 * occurrences.
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    string s; cin >> s;
    set<int> st[26];
    for (int i = 0; i < s.size(); ++i)
        st[s[i] - 'a'].insert(i);
    int Q; cin >> Q;
    while (Q--) {
        int type; cin >> type;
        if (type == 1) {
            int p; char c;
            cin >> p >> c; --p;
            st[s[p] - 'a'].erase(p);
            s[p] = c;
            st[s[p] - 'a'].insert(p);
        } else {
            int l, r, cnt = 0;
            cin >> l >> r;
            for (int i = 0; i < 26; ++i) {
                auto lf = st[i].lower_bound(l - 1);
                cnt += (lf != st[i].end() and *lf < r);
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}