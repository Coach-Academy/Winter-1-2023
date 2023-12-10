#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin, s);
    set<char> st;
    for (auto &ch: s) {
        if (isalpha(ch))
            st.insert(ch);
    }
    cout << st.size() << endl;
}
