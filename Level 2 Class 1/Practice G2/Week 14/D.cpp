#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        multiset <int> a;
        while(n--) {
            int x; cin >> x;
            a.insert(x);
        }
        int g = 0;
        while(!a.empty()) {
            pair<int, int> best{0, 0};
            for (auto &i : a) {
                best = max(best, {__gcd(g, i), i});
            }
            cout << best.second << ' ';
            g = best.first;
            a.erase(a.find(best.second));
        }
        cout << '\n';
    }
    return 0;
}
