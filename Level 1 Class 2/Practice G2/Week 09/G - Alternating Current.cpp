#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); ++i) {
        if (st.size() and s[i] != st.top()) {
            st.push(s[i]);
        } else if (st.size() and s[i] == st.top())
            st.pop();
        else st.push(s[i]);
    }
    if (st.size())
        cout << "No\n";
    else cout << "Yes\n";
}
