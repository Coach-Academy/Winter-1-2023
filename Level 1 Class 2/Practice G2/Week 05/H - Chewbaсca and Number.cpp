#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        int digit = s[i] - '0', rev = 9 - digit;
        if (digit < rev)
            cout << digit;
        else if (i == 0 and digit == 9)
            cout << digit;
        else
            cout << rev;
    }
}
