#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    stack<int> st;
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int n;
            cin >> n;
            st.push(n);
        } else if (op == 2) {
            if (!st.empty()) {
                st.pop();
            }
        } else {
            if (!st.empty())
                cout << st.top() << endll;
            else cout << "Empty!" << endll;
        }
    }
}


