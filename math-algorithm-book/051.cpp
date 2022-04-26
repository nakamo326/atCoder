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

ll mod = 1000000007;

ll modpow(ll a, ll b, ll m) {
  ll p = a, ret = 1;
  for (size_t i = 0; i < 31; i++) {
    if ((b & (1 << i)) != 0) {
      ret *= p;
      ret %= m;
    }
    p *= p;
    p %= m;
  }
  return ret;
}

ll moddiv(ll a, ll b, ll m) { return (a * modpow(b, m - 2, m)) % m; }

int main() {
  ll x, y;
  cin >> x >> y;
  ll m = 1, c = 1;
  for (size_t i = 1; i <= x + y; i++) {
    c = c * i % mod;
  }
  for (size_t i = 1; i <= x; i++) {
    m = m * i % mod;
  }
  for (size_t i = 1; i <= y; i++) {
    m = m * i % mod;
  }
  std::cout << moddiv(c, m, mod) << std::endl;
  return 0;
}
