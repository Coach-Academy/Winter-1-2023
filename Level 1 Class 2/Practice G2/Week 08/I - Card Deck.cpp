#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), pos(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            pos[v[i] - 1] = i;
        }

        for (int val = n - 1; val >= 0; --val) {
            for (int j = pos[val]; j < v.size(); ++j)
                cout << v[j] << ' ';

            for (int i = v.size() - 1; i >= pos[val]; --i)
                v.pop_back();

        }
        cout << endl;
    }
}
