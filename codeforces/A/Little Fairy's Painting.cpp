// Problem: A. Little Fairy's Painting
// Contest: Codeforces - Codeforces Round 1069 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2175/A
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
    int n;
    cin >> n;

    set<ll> colors;
    for (int i = 0; i < n; i++) {
      ll x;
      cin >> x;
      colors.insert(x);
    }

    ll k0 = colors.size(), m = LLONG_MAX;

    for (ll x : colors) {
      if (x >= k0) {
        m = min(m, x);
      }
    }

    cout << m << endl;
  }

  return 0;
}
