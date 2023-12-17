#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, strength;
    cin >> strength >> n;
    deque<pair<int, int>> dragons(n);
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].first >> dragons[i].second;
    }
    sort(dragons.begin(), dragons.end());
    while (dragons.size() and strength > dragons.front().first) {
        strength += dragons.front().second;
        dragons.pop_front();
    }
    if (dragons.size()) {
        cout << "NO\n";
    } else cout << "YES\n";

}
