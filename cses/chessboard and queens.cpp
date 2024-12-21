

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> placed;
ll ans = 0;

void fn(int r, vector<vector<char>>& grid) {
    if (r == 8) {
        ans++;
        return;
    }
    for (int c = 0; c < 8; c++) {
        bool safe = 1;
        for (int prow = 0; prow < r; prow++) {
            int pcol = placed[prow];
            if (c == pcol || abs(c - pcol) == abs(r - prow) || grid[r][c] == '*' || grid[prow][pcol] == '*') {
                safe = 0;
              // /  break;  
            }
        }
        if (safe) {
            placed.emplace_back(c);
            fn(r + 1, grid);
            placed.pop_back();
        }
    }
}
  
void solve() {
    ans = 0;
    placed.clear();  
    vector<vector<char>> grid(8, vector<char>(8));  
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> grid[i][j];
        }
    }
    fn(0, grid);
    cout << ans << endl;
}

signed main() {
    solve();
    return 0;
}
