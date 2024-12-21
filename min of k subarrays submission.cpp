#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define v vector<long long>
#define vv vector<vector<long long>>

ll n,k;
v arr;
ll dp[10001][10001];

ll rec(ll level , ll x)
{
  if(x<0)
  {
    return 1e9;
  }
  
  if(level <0)
  {
    if(x==0) return 0;
    else return 1e9;
  }
  if(dp[level][x]!=-1) return dp[level][x];
  ll ans = 1e9;
  ll mini = arr[level];
  for(ll j = level -1; j>=-1;j--)
  {
    ans = min(ans,rec(j,x-1) + mini);
    mini = min(mini,arr[j]);
  }
  return dp[level][x] = ans;
}

 
void solve() 
{
  
    cin>>n>>k;
    arr.resize(n);
    for(auto &it: arr) cin>>it;
    memset(dp, -1, sizeof(dp));
    cout<<rec(n-1,k)<<endl;
 

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
