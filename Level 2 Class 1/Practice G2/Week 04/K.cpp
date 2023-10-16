#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, a, b; cin >> n >> a >> b;
        string s; cin >> s;
        int sc = n*a;
        if (b >= 0) sc+=n*b;
        else {
            int ones = 0, zeros = 0;
            for (int i = 0; i < n; ) {
                int j = i;
                while(j < n && s[j] == s[i]) j++;
                if (s[i] == '0') zeros++;
                else ones++;
                i = j;
            }
            sc+=min(ones+1, zeros+1)*b;
        }
        cout << sc << '\n';
    }
    return 0;
}
