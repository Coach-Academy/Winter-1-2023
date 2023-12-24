#include <bits/stdc++.h>
using namespace std;

const int L = 26;

vector<string> us;

struct Node {
    int ans_idx = -1, ans_cnt = 0;
    Node *next[L]{};
};

void insert(Node *current, const string &s) {
    for (char c : s) {
        int i = c - 'a';
        if (not current->next[i])
            current->next[i] = new Node;
        current = current->next[i];
    }
    if (current->ans_idx == -1) {
        current->ans_idx = (int) us.size();
        us.push_back(s);
    }
    ++current->ans_cnt;
}

void dfs(Node *current) {
    for (int i = 0; i < L; ++i) {
        if (not current->next[i])
            continue;
        dfs(current->next[i]);
        if (current->ans_cnt < current->next[i]->ans_cnt) {
            current->ans_cnt = current->next[i]->ans_cnt;
            current->ans_idx = current->next[i]->ans_idx;
        }
    }
}

pair<int, int> query(Node *current, const string &pref) {
    for (char c : pref) {
        int i = c - 'a';
        if (not current->next[i])
            return {-1, 0};
        current = current->next[i];
    }
    return {current->ans_idx, current->ans_cnt};
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    Node trie;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        insert(&trie, s);
    }
    dfs(&trie);
    int q; cin >> q;
    while (q--) {
        string pref;
        cin >> pref;
        auto [ans, cnt] = query(&trie, pref);
        if (ans == -1) {
            cout << "-1\n";
        } else {
            cout << us[ans] << ' ' << cnt << '\n';
        }
    }
    return 0;
}