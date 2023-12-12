// Pattern Find
// https://vjudge.net/problem/SPOJ-NAJPF
// Solve by combining the 2 strings separated by '#'
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
        auto failure = string_pi(p + '#' + s);
        vector<int> ans;
        for (int i = (int) p.size() + 1; i < (int) failure.size(); ++i)
            if (failure[i] == (int) p.size())
                ans.push_back(i - 2 * (int) p.size());
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