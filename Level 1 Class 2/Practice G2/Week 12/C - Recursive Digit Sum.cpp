#include <bits/stdc++.h>

using namespace std;


long long sum(string &s) {
    if (s.size() == 1)
        return s.back() - '0';

    long long ans = (s.back() - '0');
    s.pop_back();
    ans += sum(s);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string n;
    long long k;
    cin >> n >> k;
    n = to_string(sum(n) * k);
    while (n.size() != 1) {
        n = to_string(sum(n));
    }
    cout << n << endl;

}
