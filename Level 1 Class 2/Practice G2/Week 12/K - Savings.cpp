#include <bits/stdc++.h>

using namespace std;

int solve(int day, long long total, int n) {
    total += day;
    if (total >= n)
        return day;

    return solve(day + 1, total, n);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << solve(1, 0, n);
}
