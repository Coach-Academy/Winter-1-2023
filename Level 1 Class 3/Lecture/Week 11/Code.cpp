#include <bits/stdc++.h>

using namespace std;

int v=0;
int avg=5;




void func(int *avg)
{
    *(avg)=*(avg)+1;


//    cout<<a;
//    func2()
    cout<<*(avg)<<"\n";

}

int main()
{

  int a=5;
  int b=7;
  int avg=(a+b)/2;
  int a1[100];

  cout<<avg<<"\n";
  func(&avg);
  cout<<avg;

  unsigned short int * p;



  p = new unsigned short int;

  *p= 7;

  //cout<<*p;

  delete p;

  //cout<<*p;






    return 0;
}
