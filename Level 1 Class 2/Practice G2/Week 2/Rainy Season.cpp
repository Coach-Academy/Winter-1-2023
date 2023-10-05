#include <iostream>

using namespace std;

int main() {
    char firstDay, secondDay, thirdDay;
    cin >> firstDay >> secondDay >> thirdDay;
    if (firstDay == 'R' and secondDay == 'R' and thirdDay == 'R')
        cout << 3 << endl;
    else if (secondDay == 'R' and (thirdDay == 'R' or firstDay == 'R'))
        cout << 2 << endl;
    else if (secondDay == 'R' or thirdDay == 'R' or firstDay == 'R')
        cout << 1 << endl;
    else cout << 0 << endl;

}
