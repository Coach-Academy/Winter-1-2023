#include <bits/stdc++.h>

using namespace std;

int sum(deque<int> &dq) {
    if (dq.size() == 1)
        return dq.front();

    int frnt = dq.front();
    dq.pop_front();
    int ans = frnt + sum(dq);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cout << "Case " << i << ": ";
        int n;
        cin >> n;
        deque<int> dq(n);
        for (int j = 0; j < n; ++j) {
            cin >> dq[j];
        }
        cout << sum(dq) << endl;
    }
}
