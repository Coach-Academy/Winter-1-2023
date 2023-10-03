#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double l, p, q;
    cin >> l >> p >> q;
    cout << l / (1 + (q / p)) << endl;
}
