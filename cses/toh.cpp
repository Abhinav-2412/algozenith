#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fn(int n , int a, int b, int c)
{
  if(n==0) return;
  fn(n-1, a,c,b);
  cout<<a<<" "<<c<<endl;
  fn(n-1,b,a,c);
}



void solve()
{
  ll n;
  cin>>n;
  cout<<(1<<n)-1<<endl;
  fn(n, 1,2,3);
}

signed main()
{
  solve();
}
