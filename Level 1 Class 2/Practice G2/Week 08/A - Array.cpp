#include <bits/stdc++.h>

using namespace std;

void print(vector<int> &ans) {
    cout << ans.size() << ' ';
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << ' ';
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    deque<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> pos, neg, zero;
    sort(v.begin(), v.end());
    neg.push_back(v.front());
    v.pop_front();
    if (v.back() > 0) {
        pos.push_back(v.back());
        v.pop_back();
    } else {
        pos.push_back(v.front());
        v.pop_front();
        pos.push_back(v.front());
        v.pop_front();
    }
    for (auto &s: v) {
        zero.push_back(s);
    }
    print(neg);
    print(pos);
    print(zero);
}
