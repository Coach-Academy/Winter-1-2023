#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    stack<string> st;
    string s = "";
    st.push(s);
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) { // append w to s
            string w;
            cin >> w;
            s.append(w);
            st.push(s);
        } else if (type == 2) { // remove last k characters
            int k;
            cin >> k;
            while (s.size() and k--)s.pop_back();
            st.push(s);
        } else if (type == 3) { // print k-th character
            int k;
            cin >> k;
            cout << s[k - 1] << '\n';
        } else { // undo
            st.pop();
            s = st.top();
        }

    }
}

//8
//1 abc
//3 3
//2 3
//1 xy
//3 2
//4
//4
//3 1
