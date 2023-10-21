#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << s.front();
        for (int i = 1; i < s.size() - 1; i += 2) {
            cout << s[i];
        }
        cout << s.back() << endl;
    }
}
