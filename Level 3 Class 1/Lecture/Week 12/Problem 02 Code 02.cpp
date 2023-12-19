// Phone List
// https://vjudge.net/problem/SPOJ-PHONELST
// Solution with checking the prefix in the insertion.
#include <bits/stdc++.h>
using namespace std;

struct Node {
    bool is_word = false;
    Node *next[10]{};
    bool insert(const string &s) {
        Node *current = this;
        bool is_prefix = true;
        for (char c : s) {
            int i = c - '0';
            if (not current->next[i]) {
                current->next[i] = new Node;
                is_prefix = false;
            }
            current = current->next[i];
            if (current->is_word)
                return false;
        }
        current->is_word = true;
        return not is_prefix;
    }
};

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        Node trie;
        bool is_consistent = true;
        for (int i = 0; i < n; ++i) {
            string s; cin >> s;
            is_consistent and_eq trie.insert(s);
        }
        cout << (is_consistent ? "YES\n" : "NO\n");
    }
    return 0;
}