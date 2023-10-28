#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int mx = 0, mn = INT_MAX;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (mx < arr[i])
            mx = arr[i];
        if (mn > arr[i])
            mn = arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == mx) {
            while (i != 0) {
                swap(arr[i], arr[i - 1]);
                i--;
                ans++;
            }
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] == mn) {
            while (i != n - 1) {
                swap(arr[i], arr[i + 1]);
                i++;
                ans++;
            }
            break;
        }
    }
    cout << ans << endl;

}
