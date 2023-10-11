// Problem URL: https://vjudge.net/contest/585425#problem/J
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ones = 0, twos = 0, threes = 0, fours = 0;
    for(int i = 0; i < n; i++){
        int group;
        cin >> group;
        if(group == 1) ones++;
        if(group == 2) twos++;
        if(group == 3) threes++;
        if(group == 4) fours++;
    }
    int taxis = fours;
    // {3 1}
    taxis += threes;
    ones -= threes;
    // {2 2}
    taxis += twos / 2;
    if(twos % 2 == 1)
        taxis++, ones -= 2;
    if(ones > 0){
        taxis += ones / 4;
        if(ones % 4 != 0)
            taxis++;
    }
    cout << taxis << '\n';
    return 0;
}