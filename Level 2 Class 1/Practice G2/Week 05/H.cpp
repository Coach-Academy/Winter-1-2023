#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+10;
int pref[N];
int main() {
    int n, k, q; cin >> n >> k >> q;
    while(n--) {
        int l, r; cin >> l >> r;
        pref[l]++, pref[r+1]--;
    }
    for (int i = 1; i < N; i++) pref[i]+=pref[i-1];
    for (int i = 1; i < N; i++) {
        pref[i] = pref[i] >= k;
        pref[i]+=pref[i-1];
    }
    while(q--) {
        int a, b; cin >> a >> b;
        cout << pref[b]-pref[a-1] << '\n';
    }
    return 0;
}
