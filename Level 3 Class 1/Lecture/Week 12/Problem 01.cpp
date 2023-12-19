// Search in the dictionary!
// https://vjudge.net/problem/SPOJ-DICT
#include <bits/stdc++.h>
using namespace std;

struct Node {
    bool is_word = false;
    Node *next[26]{};
    void insert(const string &s) {
        Node *current = this;
        for (char c : s) {
            int i = c - 'a';
            if (not current->next[i])
                current->next[i] = new Node;
            current = current->next[i];
        }
        current->is_word = true;
    }

    vector<string> get(string prefix) {
        Node *current = this;
        for (char c : prefix) {
            int i = c - 'a';
            if (not current->next[i])
                return {};
            current = current->next[i];
        }
        vector<string> ans;
        dfs(prefix, current, ans);
        return ans;
    }
    void dfs(string &s, Node *current, vector<string> &ans) {
        for (int i = 0; i < 26; ++i) {
            if (not current->next[i])
                continue;
            s += (char) (i + 'a');
            if (current->next[i]->is_word)
                ans.push_back(s);
            dfs(s, current->next[i], ans);
            s.pop_back();
        }
    }
    bool contains(const string &s, bool is_prefix = false) {
        Node *current = this;
        for (char c : s) {
            int i = c - 'a';
            if (not current->next[i])
                return false;
            current = current->next[i];
        }
        return is_prefix or current->is_word;
    }
};

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    Node trie;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        trie.insert(s);
    }
    int Q; cin >> Q;
    for (int q = 1; q <= Q; ++q) {
        string s; cin >> s;
        auto ans = trie.get(s);
        cout << "Case #" << q << ":\n";
        if (ans.empty()) {
            cout << "No match.\n";
        } else {
            for (auto s : ans)
                cout << s << '\n';
        }
    }
    return 0;
}