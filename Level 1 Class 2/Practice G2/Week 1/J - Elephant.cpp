#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;
    cin >> x;

    int steps = x / 5;
    x %= 5;

    steps += x / 4;
    x %= 4;

    steps += x / 3;
    x %= 3;

    steps += x / 2;
    x %= 2;

    steps += x / 1;
    x %= 1;

    cout << steps << endl;
}
