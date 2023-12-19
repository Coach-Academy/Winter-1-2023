#include <bits/stdc++.h>
using namespace std;

vector<int> string_pi(const string &s) {
    vector<int> failure(s.size());
    for (int j, i = 1; i < s.size(); ++i) {
        for (j = failure[i - 1]; j > 0 and s[i] != s[j]; j = failure[j - 1]);
        failure[i] = j + (s[i] == s[j]);
    }
    return failure;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        string s; cin >> s;
        auto failure = string_pi(s);
        int period = s.size() - failure.back();
        if (s.size() % period)
            period = s.size();
        cout << period << '\n';
        if (tc)
            cout << '\n';
    }
    return 0;
}