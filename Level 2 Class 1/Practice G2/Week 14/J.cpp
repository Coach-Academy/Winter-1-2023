#include <bits/stdc++.h>

using namespace std;

int main() {
    int _t; cin >> _t;
    while(_t--) {
        string s, t; cin >> s >> t;
        if (s.size() > t.size()) swap(s, t);
        string cur;
        while(true) {
            cur+=s;
            if (cur.size()%t.size() == 0) {
                string cur2;
                while(cur2.size() < cur.size()) cur2+=t;
                if (cur2 != cur) cur = "-1";
                break;
            }
        }
        cout << cur << '\n';
    }
    return 0;
}
