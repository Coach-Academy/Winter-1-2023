#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int arr[n];
        bool isGreaterThanD = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] > d)
                isGreaterThanD = 1;
        }
        if (isGreaterThanD) {
            sort(arr, arr + n);
            int mn1 = arr[0], mn2 = arr[1];
            if (mn1 + mn2 <= d)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else {
            cout << "YES\n";
        }

    }
}
