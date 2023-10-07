#include <iostream>

using namespace std;

int main() {
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    int dBegin = v * t, dEnd = v * s;
    if (d >= dBegin and d <= dEnd)
        cout << "No\n";
    else cout << "Yes\n";
}
