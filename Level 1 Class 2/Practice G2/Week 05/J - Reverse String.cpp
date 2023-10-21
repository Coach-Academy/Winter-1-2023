#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s, t;
        cin >> s >> t;
        bool ans = 0;
        for (int i = 0; i < s.size(); ++i) {
            string s1 = s.substr(0, i + 1), s2 = s.substr(0, i);
            reverse(s2.begin(), s2.end());
            s1 += s2;
            if (s1.find(t) != -1) {
                ans = 1;
            }
        }
        if (ans)
            cout << "Yes\n";
        else cout << "No\n";
    }
}
