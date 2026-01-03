// Problem: B. BerSU Ball
// Contest: Codeforces - Codeforces Round 277.5 (Div. 2)
// URL: https://codeforces.com/problemset/problem/489/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n;

  vector<int> boys, girls;

  while (n--) {
    int _n;
    cin >> _n;
    boys.push_back(_n);
  }

  cin >> m;
  while (m--) {
    int _m;
    cin >> _m;
    girls.push_back(_m);
  }

  sort(boys.begin(), boys.end());
  sort(girls.begin(), girls.end());

  int ans = 0;
  vector<int>& baseVec = n > m ? boys : girls;
  vector<int>& pairVec = n <= m ? boys : girls;

  int pivot = 0;
  for (size_t i = 0; i < baseVec.size(); i++) {
    int current = baseVec[i];

    for (size_t j = pivot; j < pairVec.size(); j++) {
      if (abs(current - pairVec[j]) <= 1) {
        ++ans;
        pivot = j + 1;
        break;
      }
    }
  }

  cout << ans;

  return 0;
}
