#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        bool ans = 1;
        for (int j = 0; j < s.size() - 1; ++j) {
            if (s[j + 1] - s[j] != 1) {
                ans = 0;
                break;
            }
        }
        if (ans)
            cout << "Yes\n";
        else cout << "No\n";
    }
}
