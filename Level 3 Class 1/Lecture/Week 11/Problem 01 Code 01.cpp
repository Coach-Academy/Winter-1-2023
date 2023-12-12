// Pattern Find
// https://vjudge.net/problem/SPOJ-NAJPF
#include <bits/stdc++.h>
using namespace std;

vector<int> string_pi(const string &s) {
    vector<int> failure(s.size());
    for (int j, i = 1; i < (int) s.size(); ++i) {
        for (j = failure[i - 1]; j > 0 and s[j] != s[i]; j = failure[j - 1]);
        failure[i] = j + (s[i] == s[j]);
    }
    return failure;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        string s, p;
        cin >> s >> p;
        auto failure = string_pi(p);
        vector<int> ans;
        for (int j = 0, i = 0; i < (int) s.size(); ++i) {
            for (; j > 0 and s[i] != p[j]; j = failure[j - 1]);
            j += (s[i] == p[j]);
            if (j < (int) p.size())
                continue;
            ans.push_back(i - j + 1);
            j = failure[j - 1];
        }
        if (ans.empty()) {
            cout << "Not Found\n";
        } else {
            cout << ans.size() << '\n';
            for (int x : ans)
                cout << x + 1 << ' ';
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}