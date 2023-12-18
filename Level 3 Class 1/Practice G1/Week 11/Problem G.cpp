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
    int TC; cin >> TC;
    for (int tc = 1; tc <= TC; ++tc) {
        int n; string s;
        cin >> n >> s;
        auto failure = string_pi(s);
        cout << "Test case #" << tc << '\n';
        for (int i = 0; i < n; ++i) {
            int length = i + 1;
            int period = length - failure[i];
            if (period == length or length % period)
                continue;
            cout << length << ' ' << length / period << '\n';
        }
        cout << '\n';
    }
    return 0;
}