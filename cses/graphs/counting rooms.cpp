#include <bits/stdc++.h>
using namespace std;

const int nxm = 1e3;
int n, m;
string s[nxm];

vector<pair<int, int>> pr = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool e(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && s[i][j] == '.';
}

void dfs(int i, int j) {
    s[i][j] = '#';
    for (auto it : pr) {
        int nx = i + it.first;
        int ny = j + it.second;
        if (e(nx, ny)) dfs(nx, ny);
    }
}

signed main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> s[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (e(i, j)) {
              ans++;
                dfs(i, j);
            }
        }
    }
    cout << ans;
}
