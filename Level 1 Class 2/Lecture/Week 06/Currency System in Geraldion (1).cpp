#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int mn = INT_MAX;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mn = min(mn, arr[i]);
    }

    mn == 1 ? cout << -1 << endl : cout << 1 << endl;
}
