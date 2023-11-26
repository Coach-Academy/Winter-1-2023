#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n;
    string s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int ans = 1e9 + 1;
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == 'R' && s[i] == 'L')
            ans = min(ans, (v[i] - v[i - 1]) / 2);
    }
    if (ans == 1e9 + 1)
        ans = -1;
    cout << ans;
    return 0;
}
