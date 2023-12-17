#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    if (s.find('0') != string::npos) {
        s.erase(s.begin() + s.find('0'));
    } else {
        s.pop_back();
    }
    cout << s << endl;
}
