// Problem: B. Sereja and Suffixes
// Contest: Codeforces - Codeforces Round 215 (Div. 2)
// URL: https://codeforces.com/problemset/problem/368/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, tmp;
  cin >> n >> m;
  vector<int> aVec(n), lVec(m), memoized(n);
  for (size_t i = 0; i < n; i++) {
    cin >> tmp;
    aVec[i] = tmp;
  }
  for (size_t i = 0; i < m; i++) {
    cin >> tmp;
    lVec[i] = tmp;
  }

  unordered_set<int> s;
  for (size_t i = n; i-- > 0;) {
    s.insert(aVec[i]);
    memoized[i] = s.size();
  }

  for (int x : lVec) {
    cout << memoized[x - 1] << endl;
  }

  return 0;
}
