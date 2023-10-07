#include <iostream>

using namespace std;

int main() {
    int n = 26;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        cout << (char) (96 + (s)) ;
    }
}
