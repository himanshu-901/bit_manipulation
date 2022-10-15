#include <iostream>
using namespace std;

int optimisedBit(int n){
  if(n%4==0) return n;
  if(n%4==1) return 1; 
  if(n%4==2) return n+1;
  if(n%4==3) return 0; 
}

int main() 
{
    // Given  a range (L-R) print XOR 
    // (L^l-1^L-2...R-1^R)
    
    int l,r;
    cin>>l>>r;
    
    //shortcut
    //cout<<((optimisedBit(r))^(optimisedBit(l)));
    
    int right = optimisedBit(r);
    int left = optimisedBit(l-1);
    cout<<(right^left);
    return 0;
}
