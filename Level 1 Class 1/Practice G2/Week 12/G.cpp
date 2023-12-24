#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool f(int i,string s) {
    if (i == s.size()) return true;
    if (i % 2 == 1 && s[i] >= 'a' && s[i] <= 'z')return 0;
    if (i % 2 == 0 && s[i] >= 'A' && s[i] <= 'Z')return 0;
    return f(i + 1, s);
}
int main() {
    string s;
    cin >> s;
    bool ans = f(0, s);
    (ans) ? cout << "Yes" : cout << "No";
    return 0;
}
