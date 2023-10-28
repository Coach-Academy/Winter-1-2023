#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> m >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int mn = INT_MAX;
    for (int i = 0, j = m - 1; i < n and j < n; ++i, j++)
        mn = min(mn, arr[j] - arr[i]);

    cout << mn << endl;
}
