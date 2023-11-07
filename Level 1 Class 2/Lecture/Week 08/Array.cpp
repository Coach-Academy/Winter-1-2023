#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> dq(n);
    for (auto &input: dq)
        cin >> input;

    sort(dq.begin(), dq.end());
    vector<int> neg, pos, zeros;

    neg.push_back(dq.front());
    dq.pop_front();

    if (dq[0] < 0 and dq[1] < 0) {
        pos.push_back(dq.front());
        dq.pop_front();
        pos.push_back(dq.front());
        dq.pop_front();

        for (auto &s: dq)
            zeros.push_back(s);
    } else {
        pos.push_back(dq.back());
        dq.pop_back();
        for (auto &s: dq)
            zeros.push_back(s);
    }

    cout << neg.size() << ' ';
    for (auto &out: neg)
        cout << out << ' ';
    cout << endl;

    cout << pos.size() << ' ';
    for (auto &out: pos)
        cout << out << ' ';
    cout << endl;

    cout << zeros.size() << ' ';
    for (auto &out: zeros)
        cout << out << ' ';
    cout << endl;

}
