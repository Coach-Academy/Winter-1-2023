#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &in: v)
        cin >> in;
    v.push_back(1);
    vector<int> ans;
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] == 1)
            ans.push_back(v[i - 1]);
    }
    cout << ans.size() << endl;
    for (auto &out: ans)
        cout << out << ' ';
}
