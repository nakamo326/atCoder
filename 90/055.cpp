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
  ll n, p, q;
  cin >> n >> p >> q;
  vll v(n);
  ll ret = 0;
  for (size_t i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (size_t i = 0; i < n; i++) {
    for (size_t j = i + 1; j < n; j++) {
      for (size_t k = j + 1; k < n; k++) {
        for (size_t m = k + 1; m < n; m++) {
          for (size_t o = m + 1; o < n; o++) {
            ll tmp = v[i] % p * v[j] % p * v[k] % p * v[m] % p * v[o] % p;
            if (tmp % p == q) ret++;
          }
        }
      }
    }
  }
  std::cout << ret << std::endl;

  return 0;
}
