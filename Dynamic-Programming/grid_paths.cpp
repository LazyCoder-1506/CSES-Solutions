#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<vector<ll>> dp(1002, vector<ll>(1002, -1));

ll recursion(vector<string> &grid, int x, int y, int n) {
  if (dp[x][y] != -1) return dp[x][y];
  if (grid[x][y] == '*') return dp[x][y] = 0;
  if (x == n-1 && y == n-1) return dp[x][y] = 1;
  ll ways = 0;
  if (x == n-1) ways = recursion(grid, x, y+1, n) % MOD;
  else if (y == n-1) ways = recursion(grid, x+1, y, n) % MOD;
  else ways = (recursion(grid, x, y+1, n) + recursion(grid, x+1, y, n)) % MOD;
  return dp[x][y] = ways;
}

void solve() {
  int n;
  cin >> n;
  vector<string> grid(n);
  for (int i = 0 ; i < n ; i++) cin >> grid[i];
  ll ans = recursion(grid, 0, 0, n);
  cout << ans;
}

int main() {
  FastIO
  solve();
  return 0;
}