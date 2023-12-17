#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    int pos = 0, neg = 0;
    for (auto &s: v) {
        cin >> s;
        if (s > 0)
            pos += s;
        else neg += s;
    }
    cout << pos - neg << endl;

}
