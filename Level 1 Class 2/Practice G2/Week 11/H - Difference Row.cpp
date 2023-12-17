#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &s: v)
        cin >> s;
    sort(v.begin(), v.end());
    swap(v.front(), v.back());
    for (auto &s: v)
        cout << s << ' ';
}
