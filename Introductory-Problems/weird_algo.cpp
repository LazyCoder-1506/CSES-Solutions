#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  int n;
  cin >> n;
  cout << n << " ";
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    }
    else {
      n = n * 3 + 1;
    }
    cout << n << " ";
  }
  cout << "\n";
}

signed main() {
  solve();
  return 0;
}