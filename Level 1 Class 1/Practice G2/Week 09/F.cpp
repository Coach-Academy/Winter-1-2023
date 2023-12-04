#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int q, k, op;
    cin >> q;
    stack<string> s;
    string str = "", tmp;
    while (q--) {
        int n = str.size();
        cin >> op;
        if (op == 1) {
            cin >> tmp;
            str += tmp;
            s.push(str);
        } else if (op == 2) {
            cin >> k;
            str.erase(n - k, k);
            s.push(str);
        } else if (op == 3) {
            cin >> k;
            cout << str[k-1] << "\n";
        } else {
            if (!s.empty()) {
                s.pop();
                str = s.top();
            } else
                str = "";
        }
    }
    return 0;
}
