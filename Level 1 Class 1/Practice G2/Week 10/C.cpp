#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int t;
    cin>>t;
    while(t--){
        bool found=0;
        string s1,s2;
        cin>>s1>>s2;
        set<char>mySet;
        for (int i = 0; i < s1.size(); ++i) {
            mySet.insert(s1[i]);
        }
        for (int i = 0; i < s2.size(); ++i) {
            if(mySet.count(s2[i]) == 1)found=1;
        }
        (found)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}

