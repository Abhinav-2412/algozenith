
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fn(int i, vector<ll>& nums, ll sum1, ll sum2, ll& mini) {
    if (i == nums.size()) {
        mini = min(mini, abs(sum1 - sum2));
        return;
    }
    fn(i + 1, nums, sum1 + nums[i], sum2, mini);
    fn(i + 1, nums, sum1, sum2 + nums[i], mini);
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    ll mini = 1e9;
    fn(0, nums, 0, 0, mini);
    cout << mini << endl;
}

signed main() {
    solve();
    return 0;
}