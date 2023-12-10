#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<int, int> sell;
    map<int, int, greater<>> buy;
    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        char ch;
        cin >> ch;
        if (ch == 'S') {
            int price, quantity;
            cin >> price >> quantity;
            sell[price] += quantity;
        } else {
            int price, quantity;
            cin >> price >> quantity;
            buy[price] += quantity;
        }
    }
    vector<pair<int, int>> ansBuy, ansSell;
    auto it = buy.begin();
    for (int i = 0; i < s and it != buy.end(); ++i) {
        ansBuy.push_back({it->first, it->second});
        it++;
    }

    it = sell.begin();
    for (int i = 0; i < s and it != sell.end(); ++i) {
        ansSell.push_back({it->first, it->second});
        it++;
    }

    reverse(ansSell.begin(), ansSell.end());
    for (auto &s: ansSell)
        cout << "S " << s.first << ' ' << s.second << endl;
    for (auto &s: ansBuy)
        cout << "B " << s.first << ' ' << s.second << endl;
}
//
