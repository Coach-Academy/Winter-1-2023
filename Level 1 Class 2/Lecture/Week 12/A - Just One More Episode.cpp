#include <bits/stdc++.h>

using namespace std;


string solve(int n) {
    if (n > 24)
        return "Yes\n";
    else
        return "No\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}
