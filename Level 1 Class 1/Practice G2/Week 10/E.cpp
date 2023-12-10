#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char, int> mp;
    for (int i = 0; i < key.size(); i++)
        mp[key[i]] = i;
    char shift;
    string s;
    cin >> shift >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (shift == 'R')
            cout << key[mp[s[i]] - 1];
        else
            cout << key[mp[s[i]] + 1];
    }

    return 0;
}
