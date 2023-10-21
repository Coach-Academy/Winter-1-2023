#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        for (int i = 1; i < s.size() - 1; i++) {
            s.erase(s.begin() + i);
        }
        cout << s << endl;
    }
}
