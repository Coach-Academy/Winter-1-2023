#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
        s[i] = tolower(s[i]);

    bool ans = 1;
    for (char i = 'a'; i <= 'z'; ++i) {
        if (s.find(i) == -1)
            ans = 0;
    }
    if (ans)
        cout << "YES\n";
    else cout << "NO\n";
}
