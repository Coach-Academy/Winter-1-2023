#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(cin >> n, n) {
        deque <int> dq(n);
        iota(dq.begin(), dq.end(), 1);
        cout << "Discarded cards:";
        while(dq.size() > 1) {
            cout << ' ' << dq.front();
            dq.pop_front();
            dq.push_back(dq.front());
            dq.pop_front();
            if (dq.size() > 1) cout << ',';
        }
        cout << "\nRemaining card: " << dq.front() << '\n';
    }
    return 0;
}
