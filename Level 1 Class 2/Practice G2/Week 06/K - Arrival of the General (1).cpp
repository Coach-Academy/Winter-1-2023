#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int mx = 0, mn = INT_MAX, mnPos = 0, mxPos = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (mx < arr[i]) {
            mx = arr[i];
            mxPos = i;
        }
        if (mn >= arr[i]) {
            mn = arr[i];
            mnPos = i;
        }
    }
    mnPos > mxPos ? cout << mxPos + (n - 1 - mnPos) : cout << mxPos + (n - 1 - mnPos) - 1;

}
