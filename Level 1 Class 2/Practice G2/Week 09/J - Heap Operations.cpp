#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<>> pq; // priority queue should be sorted ascending
    vector<pair<string, int>> ans;
    while (q--) {
        string type;
        cin >> type;
        if (type == "insert") {
            int s;
            cin >> s;
            ans.push_back({"insert", s});
            pq.push(s);
        } else if (type == "getMin") {
            int s;
            cin >> s;

            while (pq.size() and s > pq.top()) {
                ans.push_back({"removeMin", 0});
                pq.pop();
            }
            if ((pq.size() and pq.top() != s) or pq.empty()) {
                ans.push_back({"insert", s});
                pq.push(s);
            }

            ans.push_back({"getMin", s});
        } else {
            if (pq.empty()) {
                ans.push_back({"insert", 0});
                pq.push(0);
            }
            ans.push_back({"removeMin", 0});
            pq.pop();
        }
    }
    cout << ans.size() << endl;
    for (auto &s: ans) {
        if (s.first == "removeMin")
            cout << s.first << endl;
        else
            cout << s.first << ' ' << s.second << endl;
    }
}
