#include <iostream>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long mid = (n + 1) / 2;
    if (k <= mid)
        cout << 2 * k - 1 << endl;
    else
        cout << 2 * (k - mid) << endl;
}
