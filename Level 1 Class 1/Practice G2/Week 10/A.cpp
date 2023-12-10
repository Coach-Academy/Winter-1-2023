#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    string s;
    cin >> s;
    set<char> my_set;
    for (int i = 0; i < s.size(); ++i) {
        my_set.insert(s[i]);
    }
    int n = my_set.size();
    (n % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";

    return 0;
}