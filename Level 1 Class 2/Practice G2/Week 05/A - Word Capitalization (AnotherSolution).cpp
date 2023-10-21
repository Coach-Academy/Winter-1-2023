#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    s[0] = toupper(s.front());
    cout << s << endl;
}
