#include <bits/stdc++.h>

using namespace std;


void pushBack(deque<int> &dq, int n, bool rev) {
    if (!rev)
        dq.push_back(n);
    else
        dq.push_front(n);
}

void pushFront(deque<int> &dq, int n, bool rev) {
    if (!rev)
        dq.push_front(n);
    else
        dq.push_back(n);
}

int back(deque<int> &dq, bool rev) {
    if (!rev) {
        int ans = dq.back();
        dq.pop_back();
        return ans;
    } else {
        int ans = dq.front();
        dq.pop_front();
        return ans;
    }
}

int front(deque<int> &dq, bool rev) {
    if (!rev) {
        int ans = dq.front();
        dq.pop_front();
        return ans;
    } else {
        int ans = dq.back();
        dq.pop_back();
        return ans;
    }
}


int main() {
    int q;
    cin >> q;
    deque<int> dq;

    bool rev = 0;

    while (q--) {
        string s;
        cin >> s;
        if (s == "back") {
            if (dq.empty())
                cout << "No job for Ada?\n";
            else {
                cout << back(dq, rev) << endl;
            }
        } else if (s == "front") {
            if (dq.empty())
                cout << "No job for Ada?\n";
            else {
                cout << front(dq, rev) << endl;
            }
        } else if (s == "push_back") {
            int n;
            cin >> n;
            pushBack(dq, n, rev);
        } else if (s == "toFront") {
            int n;
            cin >> n;
            pushFront(dq, n, rev);
        } else
            rev = !rev;

    }
}
