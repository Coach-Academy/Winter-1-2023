#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        cout << 1;
        int prev = 1+s[0]-'0';
        for (int i = 1; i < n; i++) {
            int d = 1;
            if (d+s[i]-'0' == prev) d = 0;
            cout << d;
            prev = d+s[i]-'0';
        }
        cout << '\n';
    }
    return 0;
}
