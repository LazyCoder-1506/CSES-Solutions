#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  int n;
  cin >> n;
  set<int> arr;
  for (int i = 0; i < n ; i++) {
    int x;
    cin >> x;
    arr.insert(x);
  }
  cout << arr.size() << "\n";
}

signed main() {
  solve();
  return 0;
}