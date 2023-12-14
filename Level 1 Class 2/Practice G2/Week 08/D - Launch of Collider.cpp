#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int mn = INT_MAX;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i + 1] == 'L' and s[i] == 'R') {
            int dis = v[i + 1] - v[i];
            mn = min(mn, dis);
        }
    }
    if (mn == INT_MAX)
        cout << -1 << endl;
    else
        cout << mn / 2 << endl;
}
