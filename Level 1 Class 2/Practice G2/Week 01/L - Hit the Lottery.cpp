#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;
    cin >> x;

    int cash = x / 100;
    x %= 100;

    cash += x / 20;
    x %= 20;

    cash += x / 10;
    x %= 10;

    cash += x / 5;
    x %= 5;

    cash += x / 1;
    x %= 1;

    cout << cash << endl;
}
