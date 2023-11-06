#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string cur, rule;
vector <string> a;
void go(int idx = 0)
{
    if (idx == rule.size()) {
        cout << cur << '\n';
        return;
    }
    if (rule[idx] == '0') {
        for (int i = 0; i < 10; i++) {
            cur.push_back(char(i+'0'));
            go(idx+1);
            cur.pop_back();
        }
    }
    else {
        for (auto &i : a) {
            cur+=i;
            go(idx+1);
            for (int it = 0; it < i.size(); it++) cur.pop_back();
        }
    }
}

int main() {
    int n;
    while(cin >> n) {
        cout << "--\n";
        a.resize(n);
        for (auto &i : a) cin >> i;
        int m; cin >> m;
        while(m--) {
            cin >> rule;
            go();
        }
    }
    return 0;
}
