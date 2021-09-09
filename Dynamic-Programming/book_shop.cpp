#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> cost(n+1);
  vector<int> pages(n+1);
  for (int i = 1 ; i <= n ; i++) cin >> cost[i];
  for (int i = 1 ; i <= n ; i++) cin >> pages[i];
  vector<vector<int>> dp(1005, vector<int>(100005, 0));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= x; j++) {
      if (cost[i] > j) {
        dp[i][j] = dp[i-1][j];
      }
      else {
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-cost[i]] + pages[i]);
      }
    }
  }
  cout << dp[n][x];
}

int main() {
  FastIO
  solve();
  return 0;
}