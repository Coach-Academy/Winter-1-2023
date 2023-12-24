#include <bits/stdc++.h>

using namespace std;

int sum(deque<int> &a, deque<int> &b) {
    if (a.size() == 1 and b.size() == 1) {
        return a.front() * b.front();
    }

    int f1 = a.front(), f2 = b.front();
    a.pop_front();
    b.pop_front();
    int ans = (f1 * f2) + sum(a, b);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    deque<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    cout << (sum(a, b) == 0 ? "Yes" : "No") << endl;
}
