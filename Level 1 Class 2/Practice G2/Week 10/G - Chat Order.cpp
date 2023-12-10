#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    reverse(v.begin(), v.end());
    set<string> printed;
    for (int i = 0; i < n; ++i) {
        if (!printed.count(v[i]))
            cout << v[i] << '\n', printed.insert(v[i]);
    }
}
