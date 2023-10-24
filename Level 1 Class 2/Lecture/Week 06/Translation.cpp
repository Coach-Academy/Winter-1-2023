#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    s == t ? cout << "YES\n" : cout << "NO\n";
}
