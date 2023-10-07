#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; ++i) {
        string c;
        cin >> c;
        if (c == "X++" or c == "++X")
            x++;
        else
            x--;
    }
    cout << x << endl;
}
