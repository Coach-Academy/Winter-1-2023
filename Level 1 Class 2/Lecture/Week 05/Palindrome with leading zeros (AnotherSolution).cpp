#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    while (s.size() > 0 and s.back() == '0') {
        s.pop_back();
    }
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (rev == s)
        cout << "Yes\n";
    else
        cout << "No\n";
}
