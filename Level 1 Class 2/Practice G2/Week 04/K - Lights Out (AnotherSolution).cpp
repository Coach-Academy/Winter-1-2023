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
    bool state[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            state[i][j] = 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] % 2 == 1) {
                state[i][j] = !state[i][j];
                if (i + 1 < n) {
                    state[i + 1][j] = !state[i + 1][j];
                }
                if (i - 1 >= 0) {
                    state[i - 1][j] = !state[i - 1][j];
                }
                if (j + 1 < n) {
                    state[i][j + 1] = !state[i][j + 1];
                }
                if (j - 1 >= 0) {
                    state[i][j - 1] = !state[i][j - 1];
                }
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
