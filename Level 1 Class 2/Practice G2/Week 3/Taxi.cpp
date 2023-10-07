#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int one = 0, two = 0, three = 0, four = 0;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        if (s == 1)
            one++;
        else if (s == 2)
            two++;
        else if (s == 3)
            three++;
        else
            four++;
    }
    int taxi = four;
    taxi += two / 2;
    two = two % 2;
    
    if (three > one) {
        taxi += three;
        if (two)
            taxi++;
    } else {
        taxi += three;
        one -= three;
        if (two)
            one -= 2, taxi++;
        if (one > 0)
            taxi += (one + 3) / 4;
    }
    cout << taxi << endl;
}
