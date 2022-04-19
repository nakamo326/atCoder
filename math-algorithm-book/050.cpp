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

// a^b mod m
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

int main() {
  ll a, b;
  cin >> a >> b;
  std::cout << modpow(a, b, mod) << std::endl;
  return 0;
}
