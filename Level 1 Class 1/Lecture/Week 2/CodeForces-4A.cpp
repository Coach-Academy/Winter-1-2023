//https://vjudge.net/solution/45846444/S23guvlU2zNk7KcOiI74
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 2 == 0 && n > 2)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
