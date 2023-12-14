#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int mx = 0, cnt = 0;
        s.push_back('A');
        while (s.size() and s.front() == 'P')
            s.erase(s.begin());
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'A') {
                mx = max(mx, cnt);
                cnt = 0;
            } else {
                cnt++;
            }
        }
        cout << mx << endl;
    }
}
