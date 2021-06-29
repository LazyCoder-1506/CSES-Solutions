#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> dp(x+1, 0);
  vector<int> coins(n);
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }
  dp[0] = 1;
  for (int i = 1; i <= x; i++) {
    for (int j = 0; j < n ; j++) {
      if (coins[j] > i) continue;
      dp[i] = (dp[i] + dp[i - coins[j]]) % mod;
    }
  }
  cout << dp[x] % mod << "\n";
}

signed main() {
  solve();
  return 0;
}