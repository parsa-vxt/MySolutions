// Problem: C. K-th Not Divisible by n
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1352/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    int d = n - 1;
    int ns = k / d;

    int ans = (ns * n) - 1;

    int r = k % d;
    if (r > 0) ans += ++r;

    cout << ans << "\n";
  }

  return 0;
}
