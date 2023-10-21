#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        for (int i = s.size() - 2; i >= 1; i -= 2) {
            s.erase(s.begin() + i);
        }
        cout << s << endl;
    }
}
