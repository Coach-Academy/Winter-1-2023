// Phone List
// https://vjudge.net/problem/SPOJ-PHONELST
// Solution with counting the strings of this prefix.
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int cnt = 0;
    Node *next[10]{};
    void insert(const string &s) {
        Node *current = this;
        for (char c : s) {
            int i = c - '0';
            if (not current->next[i])
                current->next[i] = new Node;
            current = current->next[i];
            ++current->cnt;
        }
    }
    int count(const string &prefix) {
        Node *current = this;
        for (char c : prefix) {
            int i = c - '0';
            if (not current->next[i])
                return 0;
            current = current->next[i];
        }
        return current->cnt;
    }
};

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        Node trie;
        vector<string> ss(n);
        for (string &s : ss) {
            cin >> s;
            trie.insert(s);
        }
        bool is_consistent = true;
        for (auto s : ss)
            is_consistent and_eq trie.count(s) == 1;
        cout << (is_consistent ? "YES\n" : "NO\n");
    }
    return 0;
}