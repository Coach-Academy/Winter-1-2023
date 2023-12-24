#include <bits/stdc++.h>

using namespace std;


string solve(deque<pair<int, int>> &dq, int s, int d) {
    if (dq.empty()) {
        return "No";
    }
    int x = dq.front().first, y = dq.front().second;
    if (x < s and y > d)
        return "Yes";

    dq.pop_front();
    return solve(dq, s, d);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, s, d;
    cin >> n >> s >> d;
    deque<pair<int, int>> dq(n);
    for (auto &s: dq)
        cin >> s.first >> s.second;
    cout << solve(dq, s, d) << endl;

}
