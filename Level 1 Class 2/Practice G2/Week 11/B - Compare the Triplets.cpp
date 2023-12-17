#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    pair<int, int> ans;
    vector<int> v(3);
    for (int i = 0; i < 3; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < 3; ++i) {
        int s;
        cin >> s;
        if (s > v[i])ans.second++;
        else if (s < v[i])ans.first++;
    }
    cout << ans.first << ' ' << ans.second << endl;
}
