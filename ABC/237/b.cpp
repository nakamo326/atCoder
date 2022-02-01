#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) std::begin(x), std::end(x)

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;

int main() {
  ll h, w;
  cin >> h >> w;
  vector<vector<ll>> a(h);
  for (size_t i = 0; i < h; i++) {
    for (size_t j = 0; j < w; j++) {
      ll t;
      cin >> t;
      a[i].push_back(t);
    }
  }
  for (size_t i = 0; i < w; i++) {
    for (size_t j = 0; j < h; j++) {
      std::cout << a[j][i];
      if (j != h) std::cout << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
