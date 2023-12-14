#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<char, char> correctedVersion;
    vector<string> keyboard = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    char direction;
    cin >> direction;
    if (direction == 'R') {
        for (int i = 0; i < 3; ++i)
            for (int j = 1; j < keyboard[i].size(); ++j)
                correctedVersion[keyboard[i][j]] = keyboard[i][j - 1];

    } else {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < keyboard[i].size() - 1; ++j)
                correctedVersion[keyboard[i][j]] = keyboard[i][j + 1];
    }
    string s;
    cin >> s;
    for (auto &ch: s)
        cout << correctedVersion[ch];
}
