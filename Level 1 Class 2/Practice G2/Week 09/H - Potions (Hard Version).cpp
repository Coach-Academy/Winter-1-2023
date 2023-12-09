#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    long long health = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<>> drank;
    for (int i = 0, s; i < n; ++i) {
        cin >> s;
        health += s;
        drank.push(s);
        if (health < 0) {
            health -= drank.top();
            drank.pop();
        }
    }
    cout << drank.size() << endl;
}
