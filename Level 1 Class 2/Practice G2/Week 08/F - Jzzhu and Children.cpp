#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    deque<deque<int>> dq(n, deque<int>(2));
    for (int i = 0; i < n; ++i) {
        cin >> dq[i][0];
        dq[i][1] = i;
    }

    while (dq.size() > 1) {
        dq.front()[0] -= m;
        if (dq.front()[0] > 0)
            dq.push_back(dq.front());
        dq.pop_front();
    }
    cout << dq.front()[1] + 1 << endl;

}
