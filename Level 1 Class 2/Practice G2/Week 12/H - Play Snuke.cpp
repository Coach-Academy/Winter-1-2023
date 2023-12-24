#include <bits/stdc++.h>

using namespace std;


int minPrice(deque<int> &a, deque<int> &p, deque<int> &x) {
    if (a.empty()) {
        return INT_MAX;
    }

    int time = a.front(), price = p.front(), stock = x.front();
    a.pop_front();
    p.pop_front();
    x.pop_front();
    if (time < stock) { // found video game
        int ans = min(price, minPrice(a, p, x));
        return ans;
    } else // out of stock
        return minPrice(a, p, x);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    deque<int> a(n), p(n), x(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> p[i] >> x[i];
    }
    int ans = minPrice(a, p, x);
    cout << (ans == INT_MAX ? -1 : ans) << endl;
}
