#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > 0 and b > 0)
        cout << "Alloy\n";
    else if (a > 0)
        cout << "Gold\n";
    else
        cout << "Silver\n";
}
