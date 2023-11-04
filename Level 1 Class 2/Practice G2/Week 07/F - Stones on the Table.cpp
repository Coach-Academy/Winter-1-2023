#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i + 1]) {
            s.erase(s.begin() + i);
            i--;
        }
    }
    cout << n - s.size() << endl;
}
