// Problem: B. Kuriyama Mirai's Stones
// Contest: Codeforces - Codeforces Round 248 (Div. 2)
// URL: https://codeforces.com/problemset/problem/433/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct Question {
  int t;
  int l;
  int r;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, v, m;
  cin >> n;

  vector<int> vec;

  while (n--) {
    cin >> v;
    vec.push_back(v);
  }

  vector<int> vecSorted = vec;
  sort(vecSorted.begin(), vecSorted.end());

  vector<ll> prefVec(vec.size() + 1, 0);
  vector<ll> prefVecSorted(vecSorted.size() + 1, 0);

  for (int i = 0; i < (int)vec.size(); i++) {
    prefVec[i + 1] = prefVec[i] + vec[i];
    prefVecSorted[i + 1] = prefVecSorted[i] + vecSorted[i];
  }

  vector<Question> qVec;
  cin >> m;

  int q, l, r;
  while (m--) {
    cin >> q >> l >> r;
    qVec.push_back({q, l, r});
  }

  ll ans;
  for (const Question& i : qVec) {
    if (i.t == 1) {
      ans = prefVec[i.r] - prefVec[i.l - 1];
    } else {
      ans = prefVecSorted[i.r] - prefVecSorted[i.l - 1];
    }
    cout << ans << '\n';
  }

  return 0;
}
