// Problem URL: https://vjudge.net/problem/CodeForces-71A

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int test_cases = 1;
    cin >> test_cases;
    while(test_cases--){
        string word;
        cin >> word;
        if(word.length() > 10)
            cout << word.front() << word.length() - 2 << word.back() << '\n';
        else 
            cout << word << '\n';
        
    }
    return 0;
}