#include <bits/stdc++.h>
using namespace std;

const int L = 26, N = 1e5 + 5;

struct Node {
    int cnt = 0;
    Node *next[L]{};
};

multiset<int> ms[N];

void insert(Node *current, const string &s) {
    int length = 0;
    for (char c : s) {
        int i = c - 'a';
        if (not current->next[i])
            current->next[i] = new Node;
        current = current->next[i];
        ++length;
        multiset<int> &cur_ms = ms[length];
        if (current->cnt > 0)
            cur_ms.erase(cur_ms.find(current->cnt));
        ++current->cnt;
        cur_ms.insert(current->cnt);
    }
}

void erase(Node *current, const string &s) {
    int length = 0;
    for (char c : s) {
        int i = c - 'a';
        current = current->next[i];
        ++length;
        multiset<int> &cur_ms = ms[length];
        cur_ms.erase(cur_ms.find(current->cnt));
        --current->cnt;
        if (current->cnt > 0)
            cur_ms.insert(current->cnt);
    }
}

string words[N];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    Node root;
    int Q; cin >> Q;
    for (int q = 1; q <= Q; ++q) {
        int type; cin >> type;
        if (type == 1) {
            cin >> words[q];
            reverse(words[q].begin(), words[q].end());
            insert(&root, words[q]);
            continue;
        }
        if (type == 3) {
            int x; cin >> x;
            if (not words[x].empty()) {
                erase(&root, words[x]);
                words[x].clear();
            }
            continue;
        }
        int k, l;
        cin >> k >> l;
        auto iter = ms[l].lower_bound(k);
        cout << (iter == ms[l].end() ? "NO\n" : "YES\n");
    }
    return 0;
}