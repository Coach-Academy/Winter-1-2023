#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector <pair<int, int>> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        long long acc = 0;
        for (int i = 0, j = 0; i < n; i++) {
            if (j == i) acc+=a[j++].first;
            while(j < n && a[j].first <= acc) acc+=a[j++].first;
            if (j == n) {
                cout << n-i << '\n';
                vector <int> ans;
                for ( ; i < n; i++) {
                    ans.push_back(a[i].second+1);
                }
                sort(ans.begin(), ans.end());
                for (auto &k : ans) cout << k << ' ';
                cout << '\n';
                break;
            }
        }
    }
    return 0;
}
