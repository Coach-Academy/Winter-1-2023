#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (mp[s] > 0)
            cout << s << mp[s]++ << endl;
        else
            cout << "OK\n", mp[s]++;
    }
}
