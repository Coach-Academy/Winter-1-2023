#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][2], gain[n];
    long long sizeOfSongs = 0, sumOfCompressedSongs = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i][0] >> arr[i][1];
        sizeOfSongs += arr[i][0];
        sumOfCompressedSongs += arr[i][1];
        gain[i] = arr[i][0] - arr[i][1];
    }

    if (sumOfCompressedSongs > m) {
        cout << -1 << endl;
        return 0;
    }

    sort(gain, gain + n, greater<>());
    int step = 0;
    for (int i = 0; i < n and sizeOfSongs > m; ++i) {
        sizeOfSongs -= gain[i];
        step++;
    }
    cout << step << endl;

}
