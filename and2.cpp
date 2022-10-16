#include <iostream>
using namespace std;

void check(int n,int i){
  int mask = (1<<i);
  bool set = mask&n;
  if(set) cout<<"Yes";
  else cout<<"No";
}

int main() 
{
    // given n , chk if the ith bit is set or not
    int n,i;
    cin>>n>>i;
    check(n,i);
    return 0;
}
