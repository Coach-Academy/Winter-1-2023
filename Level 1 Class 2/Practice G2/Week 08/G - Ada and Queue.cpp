#include <bits/stdc++.h>

using namespace std;

void getBack(deque<int> &dq, bool rev) {
    if (dq.empty())
        cout << "No job for Ada?" << endl;
    else if (!rev) {
        cout << dq.back() << endl;
        dq.pop_back();
    } else {
        cout << dq.front() << endl;
        dq.pop_front();
    }
}

void getFront(deque<int> &dq, bool rev) {
    if (dq.empty())
        cout << "No job for Ada?" << endl;
    else if (!rev) {
        cout << dq.front() << endl;
        dq.pop_front();
    } else {
        cout << dq.back() << endl;
        dq.pop_back();
    }
}

void pushBack(deque<int> &dq, int n, bool rev) {
    if (!rev) {
        dq.push_back(n);
    } else {
        dq.push_front(n);
    }
}

void pushFront(deque<int> &dq, int n, bool rev) {
    if (!rev) {
        dq.push_front(n);
    } else {
        dq.push_back(n);
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
            getBack(dq, rev);
        } else if (s == "front") {
            getFront(dq, rev);
        } else if (s == "push_back") {
            int n;
            cin >> n;
            pushBack(dq, n, rev);
        } else if (s == "toFront") {
            int n;
            cin >> n;
            pushFront(dq, n, rev);
        } else {
            rev = !rev;
        }
    }
}
