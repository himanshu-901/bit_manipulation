#include <iostream>
using namespace std;

void check(int n){
  if(n&1) cout<<"Odd";
  else cout<<"even";
}

int main() 
{
    // given n , chk if n odd or not
    int n;
    cin>>n;
    check(n);
    return 0;
}
