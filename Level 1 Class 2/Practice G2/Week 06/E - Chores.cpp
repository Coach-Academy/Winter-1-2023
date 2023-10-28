#include <iostream>

using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k >> x;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0 and k--; --i) {
        arr[i] = x;
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    cout << sum << endl;

}
