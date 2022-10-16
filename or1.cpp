#include <iostream>
using namespace std;

void set(int n,int i){
  int mask = 1<<i;
  int num = n|mask;
  cout<<num;
}

int main() 
{
    // given n , set the ith bit of number
    int n,i;
    cin>>n>>i;
    set(n,i);
    return 0;
}
