#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool fn(ll a, ll b) {
   
}

void solve() {
    ll n;
    cin >> n;
    
for(ll i =1;i<=n; i++)
{
  ll a = i*i;
  ll b = a*(a-1)/2;
  cout<< b - 4*(i-1)*(i-2)<<endl;
}
}

signed main() {
    solve();
    
}