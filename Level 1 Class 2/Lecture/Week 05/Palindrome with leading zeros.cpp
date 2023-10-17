#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < 10; ++i) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s == rev) {
            cout << "Yes\n";
            return 0;
        }
        s = '0' + s;
    }
    cout << "No\n";
}
