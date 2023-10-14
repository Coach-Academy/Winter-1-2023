#include <bits/stdc++.h>
using namespace std;
const int E = 5, F = 100, B = 1e9;
int n, k, ts[E], dist[E][F];
vector<int> floors[E], elevators[F];

void dij() {
    if (k == 0)
        return cout << "0\n", void();
    for (int e = 0; e < E; ++e)
        for (int f = 0; f < F; ++f)
            dist[e][f] = B;
    priority_queue<tuple<int, int, int>> pq;
    for (int e = 0; e < E; ++e) {
        if (not floors[e].empty() and floors[e][0] == 0) {
            dist[e][0] = 0;
            pq.emplace(0, e, 0);
        }
    }
    while (not pq.empty()) {
        auto [c, e, f] = pq.top(); pq.pop();
        c *= -1;
        if (dist[e][f] < c)
            continue;
        if (f == k)
            return cout << c << '\n', void();
        for (int n_e : elevators[f]) {
            for (int n_f : floors[n_e]) {
                int cur = (n_e != e) * 60 + abs(n_f - f) * ts[n_e] + c;
                if (cur < dist[n_e][n_f])
                    pq.emplace(-(dist[n_e][n_f] = cur), n_e, n_f);
            }
        }
    }
    cout << "IMPOSSIBLE\n";
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    while (cin >> n >> k) {
        for (int i = 0; i < n; ++i)
            cin >> ts[i];
        cin.ignore();
        for (int i = 0; i < n; ++i) {
            string line;
            getline(cin, line);
            stringstream ss(line);
            for (string s; ss >> s; ) {
                int floor = stoi(s);
                floors[i].push_back(floor);
                elevators[floor].push_back(i);
            }
        }
        dij();
        for (int e = 0; e < E; ++e)
            floors[e].clear();
        for (int f = 0; f < F; ++f)
            elevators[f].clear();
    }
    return 0;
}