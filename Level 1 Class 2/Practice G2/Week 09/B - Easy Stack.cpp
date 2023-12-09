#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    stack<int> st;
    while (n--) {
        int op;
        cin >> op;
        if (op == 1) {
            int s;
            cin >> s;
            st.push(s);
        } else if (op == 2) {
            if (st.size())
                st.pop();
        } else {
            if (st.size())
                cout << st.top() << '\n';
            else cout << "Empty!\n";
        }
    }

}
