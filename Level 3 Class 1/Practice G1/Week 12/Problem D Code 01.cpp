// This code uses boolean good-letter array.
#include <bits/stdc++.h>
using namespace std;

const int L = 26;

struct Node {
    Node *next[L]{};
};

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    string s; cin >> s;
    bool is_good[26]{};
    for (int i = 0; i < 26; ++i) {
        char c; cin >> c;
        is_good[i] = c - '0';
    }
    Node root;
    int k, ans = 0; cin >> k;
    for (int i = 0; i < s.size(); ++i) {
        Node *current = &root;
        int rem = k;
        for (int j = i; j < s.size(); ++j) {
            rem -= not is_good[s[j] - 'a'];
            if (rem < 0)
                break;
            if (not current->next[s[j] - 'a']) {
                current->next[s[j] - 'a'] = new Node;
                ++ans;
            }
            current = current->next[s[j] - 'a'];
        }
    }
    cout << ans << '\n';
    return 0;
}