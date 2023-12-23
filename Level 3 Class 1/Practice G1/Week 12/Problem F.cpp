#include <bits/stdc++.h>
using namespace std;

const int L = 26;

struct Node {
    Node *next[L]{};
};

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int n, nc; string s;
        cin >> n >> nc >> s;
        Node root;
        int ans = 0;
        for (int i = 0; i + n <= s.size(); ++i) {
            Node *current = &root;
            bool new_word = false;
            for (int j = i, e = i + n; j < e; ++j) {
                int l = s[j] - 'a';
                if (not current->next[l]) {
                    current->next[l] = new Node;
                    new_word = true;
                }
                current = current->next[l];
            }
            ans += new_word;
        }
        cout << ans << '\n';
        if (tc) cout << '\n';
    }
    return 0;
}