#include <iostream>

using namespace std;

int main() {
    int n = 3;
    int arr[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
    int sum[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sum[i][j] = arr[i][j];
            if (i - 1 >= 0) {
                sum[i][j] += arr[i - 1][j];
            }
            if (i + 1 < n) {
                sum[i][j] += arr[i + 1][j];
            }
            if (j - 1 >= 0) {
                sum[i][j] += arr[i][j - 1];
            }
            if (j + 1 < n) {
                sum[i][j] += arr[i][j + 1];
            }
        }
    }

    bool state[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            state[i][j] = 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (sum[i][j] % 2 == 1) {
                state[i][j] = !state[i][j];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << state[i][j];
        }
        cout << endl;
    }
}
