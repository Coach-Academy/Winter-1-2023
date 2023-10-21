#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        if (s.size() > 10)
            cout << s.front() << s.size() - 2 << s.back() << endl;
        else cout << s << endl;
    }
}
