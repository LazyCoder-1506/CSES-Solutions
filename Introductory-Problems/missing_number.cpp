#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  int n;
  cin >> n;
  int sum_n = 0;
  for (int i = 1; i < n ; i++) {
    int x;
    cin >> x;
    sum_n += x;
  }
  int tot = n * (n + 1) / 2;
  cout << (tot - sum_n) << "\n";
}

signed main() {
  solve();
  return 0;
}