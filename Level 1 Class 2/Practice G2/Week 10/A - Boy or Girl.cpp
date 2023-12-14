#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    set<char> st;
    for (auto &ch: s) {
        st.insert(ch);
    }
    if (st.size() % 2 == 1)
        cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";
}
