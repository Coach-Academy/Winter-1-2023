#include <bits/stdc++.h>

using namespace std;


void solve(string &x) {
    if (x.empty() or x.front() == '.')
        return;

    cout << x.front();
    x.erase(x.begin());
    solve(x);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string x;
    cin >> x;
    solve(x);
}
