#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(string s) {
    string revS = s;
    reverse(revS.begin(), revS.end());
    return s == revS;
}

int main() {
    string s;
    cin >> s;
    while (s.size() > 1 and s.back() == '0') {
        s.pop_back();
    }
    isPalindrome(s) ? cout << "Yes\n" : cout << "No\n";
}
