#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    deque<int> dq(n);
    for (auto &element: dq) {
        cin >> element;
    }
    while (d--) {
        dq.push_back(dq.front());
        dq.pop_front();
    }
    for (auto &ans: dq) {
        cout << ans << ' ';
    }
    
}
