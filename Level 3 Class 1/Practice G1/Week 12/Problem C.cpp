#include <bits/stdc++.h>
using namespace std;

const int L = 26;

struct Node {
    int cnt = 0;
    Node *next[L]{};
};

void insert(Node *current, const string &s) {
    for (char c : s) {
        int i = c - 'a';
        if (not current->next[i])
            current->next[i] = new Node;
        current = current->next[i];
        ++current->cnt;
    }
}

int query(Node *current, const string &p) {
    for (char c : p) {
        int i = c - 'a';
        if (not current->next[i])
            return 0;
        current = current->next[i];
    }
    return current->cnt;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n, Q;
    Node root;
    cin >> n >> Q;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        insert(&root, s);
    }
    for (int i = 0; i < Q; ++i) {
        string p; cin >> p;
        cout << query(&root, p) << '\n';
    }
    return 0;
}