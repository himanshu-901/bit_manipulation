#include <iostream>
using namespace std;

int bit(int n){
  int ans = 0;
  for(int i=1;i<=n;i++){
    ans = ans^i;
  }
  return ans;
}

int optimisedBit(int n){
  if(n%4==0) return n;
  if(n%4==1) return 1; 
  if(n%4==2) return n+1;
  if(n%4==3) return 0; 
}

int main() 
{
    // print xor of all number between (1 to N)
    int n;
    cin>>n;
    
    
    // bruteforced method
    cout<<bit(n)<<endl;
    
    
    //optimised method
    cout<<optimisedBit(n);
    
    return 0;
}
