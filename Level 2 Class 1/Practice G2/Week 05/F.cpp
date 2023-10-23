#include <bits/stdc++.h>

using namespace std;

int main() {
    int q; cin >> q;
    map <int, int> frq, frqFrq;
    while(q--) {
        int t, x; cin >> t >> x;
        if (t == 1) {
            frqFrq[frq[x]]--;
            frq[x]++;
            frqFrq[frq[x]]++;
        }
        if (t == 2) {
            frqFrq[frq[x]]--;
            if (frq[x] > 0) frq[x]--;
            frqFrq[frq[x]]++;
        }
        if (t == 3) {
            cout << (frqFrq[x] > 0) << '\n';
        }
    }
    return 0;
}
