#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (auto &s: v)
        cin >> s;
    sort(v.begin(),v.end());
    int l = 0, r = n - 1;
    int mn = INT_MAX;
    while (r < m) {
        int mnElement = *min_element(v.begin() + l, v.begin() + r + 1),
                mxElement = *max_element(v.begin() + l, v.begin() + r + 1);
        mn = min(mn, mxElement - mnElement);
        r++, l++;
    }
    cout << mn << endl;

}

