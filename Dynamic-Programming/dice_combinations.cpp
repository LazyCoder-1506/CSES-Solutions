#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> arr(10000005, -1);

int dp(int n) {
  if (n == 0) return arr[0] = 1;
  if (n == 1) return arr[1] = 1;

  if (arr[n] != -1) return arr[n];

  int ans1 = ((n > 0) ? (dp(n - 1)) % 1000000007 : 0);
  int ans2 = ((n > 1) ? (dp(n - 2)) % 1000000007 : 0);
  int ans3 = ((n > 2) ? (dp(n - 3)) % 1000000007 : 0);
  int ans4 = ((n > 3) ? (dp(n - 4)) % 1000000007 : 0);
  int ans5 = ((n > 4) ? (dp(n - 5)) % 1000000007 : 0);
  int ans6 = ((n > 5) ? (dp(n - 6)) % 1000000007 : 0);

  return arr[n] = ((ans1 + ans2 + ans3 + ans4 + ans5 + ans6) % 1000000007);
}

void solve() {
  int n;
  cin >> n;
  int res = dp(n);
  cout << res << "\n";
}

signed main() {
  solve();
  return 0;
}