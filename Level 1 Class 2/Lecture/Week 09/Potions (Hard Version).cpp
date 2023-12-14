#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, ans = 0;
    long long sum = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<>> pq;

    for (int i = 0, s; i < n; ++i) {
        cin >> s;
        sum += s;
        pq.push(s);
        ans++;
        if (sum < 0) {
            sum -= pq.top();
            pq.pop();
            ans -= 1;
        }
    }
    cout << ans << endl;
}


