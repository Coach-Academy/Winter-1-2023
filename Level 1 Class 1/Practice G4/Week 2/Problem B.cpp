#include<bits/stdc++.h>
using namespace std;




signed  main(){

    int a, b , p , m , c;
    cin >> a>>b ;
    p =a+b;
    m=a-b;
    c=a*b;
      
     // 1  0
     //p=1 m=1 c=0
    if (p>=m && p>=c)
        cout << p;
    else if (m>=p&&m>=c)
        cout << m;
    else
        cout << c;


    return 0;
}

