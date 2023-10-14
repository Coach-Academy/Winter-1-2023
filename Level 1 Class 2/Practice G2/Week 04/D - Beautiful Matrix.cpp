#include <iostream>

using namespace std;

int main() {
    int arr[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> arr[i][j];
        }
    }
    int steps = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (arr[i][j] == 1) {
                if (j < 2) {
                    while (j != 2) {
                        arr[i][j] = 0;
                        arr[i][j + 1] = 1;
                        j++;
                        steps++;
                    }
                } else if (j > 2) {
                    while (j != 2) {
                        arr[i][j] = 0;
                        arr[i][j - 1] = 1;
                        j--;
                        steps++;
                    }
                }
                if (i < 2) {
                    while (i != 2) {
                        arr[i][j] = 0;
                        arr[i + 1][j] = 1;
                        i++;
                        steps++;
                    }
                } else if (i > 2) {
                    while (i != 2) {
                        arr[i][j] = 0;
                        arr[i - 1][j] = 1;
                        i--;
                        steps++;
                    }
                }
                cout << steps << endl;
                return 0;
            }
        }
    }
}
