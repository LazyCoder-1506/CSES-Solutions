#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int> dp(1000005, -1);

vector<int> digitArray(int n) {
  vector<int> digits;
  while (n != 0) {
    digits.push_back(n % 10);
    n = n / 10;
  }
  return digits;
}

int recursion(int n) {
  if (dp[n] != -1) return dp[n];
  vector<int> digits = digitArray(n);
  if (digits.size() == 0) return 0;
  int steps = INT_MAX;
  for (int digit : digits) {
    if (digit > 0) steps = min(steps, recursion(n - digit));
  }
  return dp[n] = steps + 1;
}

void solve() {
  int n;
  cin >> n;
  int ans = recursion(n);
  cout << ans;
}

int main() {
  FastIO
  solve();
  return 0;
}