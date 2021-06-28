#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  string s;
  cin >> s;
  int n = s.length();
  int rep = 0;
  int cnt = 1;
  for (int i = 1; i < n ; i++) {
    if (s[i] == s[i - 1]) {
      cnt++;
    }
    else {
      rep = max(rep, cnt);
      cnt = 1;
    }
  }
  cout << max(rep, cnt) << "\n";
}

signed main() {
  solve();
  return 0;
}