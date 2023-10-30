#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;
    int L = -2e9, R = 2e9;
    while(n--) {
        string s; cin >> s;
        int y; cin >> y;
        char c; cin >> c;
        if (c == 'N') {
            s[0] = s[0]^'>'^'<';
            if (s.size() > 1) s.pop_back();
            else s.push_back('=');
        }
        if (s[0] == '>') L = max(L, y+(s.size() == 1));
        else R = min(R, y-(s.size() == 1));
    }
    cout << (L > R ? "Impossible" : to_string(L)) << '\n';
    return 0;
}
