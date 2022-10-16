#include <iostream>
using namespace std;

void extract(int n,int i){
  int bit = (n>>i)&1;
  cout<<bit;
}

int main() 
{
    // given n , chk if the ith bit is set or not
    int n,i;
    cin>>n>>i;
    extract(n,i);
    return 0;
}
