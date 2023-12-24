#include <bits/stdc++.h>

using namespace std;


string solve(int i, string &s) {
    if (i == s.size()) {
        return "Yes";
    }

    if ((i + 1) % 2 == 0 && isupper(s[i])) {//even
        return solve(i + 1, s);
    } else if ((i + 1) % 2 != 0 && islower(s[i])) {//odd
        return solve(i + 1, s);
    } else {
        return "No";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    cout << solve(0, s) << endl;
}
