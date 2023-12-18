#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int q; cin >> q;
    while(q--) {
        int n; cin >> n;
        string s; cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') continue;
            for (int j = i-1; ~j; j--) {
                s[j] = s[j+1]^'R'^'B';
            }
            break;
        }
        if (s[0] == '?') s[0] = 'B';
        for (int i = 1; i < n; i++) {
            if (s[i] == '?') s[i] = s[i-1]^'R'^'B';
        }
        cout << s << '\n';
    }
    return 0;
}
