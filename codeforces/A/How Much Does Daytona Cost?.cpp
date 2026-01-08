// Problem: A. How Much Does Daytona Cost?
// Contest: Codeforces - Codeforces Round 900 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1878/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    int found = 0, current;
    for (int i = 0; i < n; i++) {
      cin >> current;
      if (current == k) {
        found = 1;
      }
    }

    cout << (found ? "YES" : "NO") << endl;
  }

  return 0;
}