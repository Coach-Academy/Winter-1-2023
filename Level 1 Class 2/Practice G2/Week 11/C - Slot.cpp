#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    set<char> s;
    for (int i = 0; i < 3; ++i) {
        char ch;
        cin >> ch;
        s.insert(ch);
    }
    if (s.size() == 1)
        cout << "Won\n";
    else cout << "Lost\n";
}
