#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int mn = INT_MAX, ans = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (mn > arr[i])
                mn = arr[i];
            else if (mn < arr[i])
                ans++;
        }
        cout << ans << endl;
    }

}
