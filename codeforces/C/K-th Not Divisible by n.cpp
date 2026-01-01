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

    int skippedMultiplesOfN = (k - 1) / (n - 1);

    cout << (k + skippedMultiplesOfN) << "\n";
  }

  return 0;
}
