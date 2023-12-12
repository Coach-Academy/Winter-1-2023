#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int f[2][26]{};
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < n; i++) {
                char c; cin >> c;
                f[j][c-'a']++;
            }
        }
        bool bad = false;
        for (int i = 0; i < 26; i++) {
            int diff = f[0][i]-f[1][i];
            if (diff < 0 || diff%k) {
                bad = true;
                cout << "No\n";
                break;
            }
            if (i+1 < 26) f[0][i+1]+=diff;
        }
        if (!bad) cout << "Yes\n";
    }
    return 0;
}
