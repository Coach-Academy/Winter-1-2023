#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    string ans;
    for (int i = 0; i < s.size(); ++i) {
        if (isalpha(s[i])) {
            if (ans.find(s[i]) == -1)
                ans += s[i];
        }
    }
    cout << ans.size() << endl;
}
