#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <pair<int, int>> a(n);
    for (auto &[x, y] : a) cin >> x >> y;
    sort(a.begin(), a.end());
    vector <int> b;
    for (auto &[x, y] : a) b.push_back(y);
    if (is_sorted(b.begin(), b.end())) cout << b.back() << '\n';
    else {
        bool done = false;
        for (int i = 0; !done && i < n; i++) {
            if (i+1 < n && a[i+1].second >= a[i].first) {
                vector <int> b;
                for (int j = i+1; j < n; j++) b.push_back(a[j].second);
                if (is_sorted(b.begin(), b.end())) {
                    done = true;
                    cout << b.back() << '\n';
                    break;
                }
            }
        }
        if (!done) cout << a.back().first << '\n';
    }
    return 0;
}
