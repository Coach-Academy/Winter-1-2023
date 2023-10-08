#include<bits/stdc++.h>
using namespace std;




signed  main(){


    char c1,c2,c3;
    cin>>c1>>c2>>c3;

    if(c1=='R'&&c2=='R'&&c3=='R')cout<<"3\n";
    else if(c1=='S'&&c2=='S'&&c3=='S')cout<<"0\n";
    else if((c2=='R'&&(c2==c1||c2==c3)))cout<<"2\n";
    else cout<<"1\n";



    return 0;
}

