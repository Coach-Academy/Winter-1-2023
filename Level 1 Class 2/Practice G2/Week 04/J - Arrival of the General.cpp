#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int mn = INT_MAX, mnPos = 0, mx = INT_MIN, mxPos = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (mx < arr[i]) {
            mx = arr[i];
            mxPos = i;
        }
    }
    int ans = 0;
    for (int i = mxPos; i > 0; --i) {
        swap(arr[i], arr[i - 1]);
        ans++;
    }
    for (int i = 0; i < n; ++i) {
        if (mn >= arr[i]) {
            mn = arr[i];
            mnPos = i;
        }
    }
    for (int i = mnPos; i < n - 1; ++i) {
        swap(arr[i], arr[i + 1]);
        ans++;
    }
    cout << ans << endl;

}
