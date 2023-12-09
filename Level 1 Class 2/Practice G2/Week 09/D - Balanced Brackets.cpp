#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
        stack<char> st;
        string s;
        cin >> s;
        bool ans = 1;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' or s[i] == '{' or s[i] == '[')
                st.push(s[i]);
            else {
                if (s[i] == ')') {
                    if (st.empty() or st.top() != '(') {
                        ans = 0;
                        break;
                    } else
                        st.pop();
                } else if (s[i] == '}') {
                    if (st.empty() or st.top() != '{') {
                        ans = 0;
                        break;
                    } else
                        st.pop();
                } else if (s[i] == ']') {
                    if (st.empty() or st.top() != '[') {
                        ans = 0;
                        break;
                    } else
                        st.pop();
                }
            }
        }
        if (ans and st.empty())cout << "YES\n";
        else cout << "NO\n";
    }

}

//3
//{{[()]}
//{[(])}
//{{[[(())]]}}
