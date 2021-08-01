#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> coins(n);
  for (int i = 0; i < n; i++) cin >> coins[i];
  vector<int> dp(x + 1, 0);
  dp[0] = 1;
  for (int i = 0; i < n; i++) {
    int coin = coins[i];
    for (int j = coin; j <= x; j++) {
      dp[j] = (dp[j] + dp[j - coin]) % mod;
    }
  }
  cout << dp[x];
}

signed main() {
  solve();
  return 0;
}