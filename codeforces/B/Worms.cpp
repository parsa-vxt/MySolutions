// Problem: B. Worms
// Contest: Codeforces - Codeforces Round 271 (Div. 2)
// URL: https://codeforces.com/problemset/problem/474/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct Pile {
  int no;
  int from;
  int to;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<Pile> p;

  int n;
  cin >> n;
  int prev = 0;
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    p.push_back({i, prev + 1, a + prev});
    prev += a;
  }

  // for (const auto& m : p) {
  // cout << m.from << " " << m.to << '\n';
  // }
  // cout << endl;

  int m;
  cin >> m;

  while (m--) {
    int q;
    cin >> q;

    int lower = 0;
    int upper = p.size() - 1;

    while (lower <= upper) {
      int pivot = lower + (upper - lower) / 2;

      if (q <= p[pivot].to && q >= p[pivot].from) {
        cout << p[pivot].no << endl;
        break;
      } else if (q > p[pivot].to) {
        lower = pivot + 1;
      } else {
        upper = pivot - 1;
      }
    }
  }

  return 0;
}
