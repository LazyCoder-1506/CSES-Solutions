#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define inf INT_MAX

vector<int> dp(1000005, inf);

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> coins(n);
  for (int i = 0; i < n ; i++) cin >> coins[i];
  vector<int> dp(x + 1, inf);
  dp[0] = 0;
  for (int i = 0 ; i < n ; i++) {
    int coin = coins[i];
    for (int j = coin; j <= x; j++) {
      dp[j] = min(dp[j], 1 + dp[j - coin]);
    }
  }
  if (dp[x] == inf) cout << "-1";
  else cout << dp[x];
}

signed main() {
  solve();
  return 0;
}