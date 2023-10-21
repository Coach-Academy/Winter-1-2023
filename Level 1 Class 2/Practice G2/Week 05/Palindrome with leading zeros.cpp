#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string n;
    cin >> n;

    while (n.size() > 0 and n.back() == '0')
        n.pop_back();

    string rev = n;
    reverse(rev.begin(), rev.end());
    if (rev == n)
        cout << "Yes\n";
    else cout << "No\n";
}
