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
    int n; string s;
    cin >> n >> s;
    for (; n != -1 and s != "*"; cin >> n >> s) {
        if (n < s.size()) {
            cout << "0\n";
            continue;
        }
        n -= s.size();
        auto failure = string_pi(s);
        cout << 1 + n / (s.size() - failure.back()) << '\n';
    }
    return 0;
}