#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x >= 90)
        cout << "expert\n";
    else if (x >= 70)
        cout << 90 - x << endl;
    else if (x >= 40)
        cout << 70 - x << endl;
    else if (x < 40)
        cout << 40 - x << endl;
}
