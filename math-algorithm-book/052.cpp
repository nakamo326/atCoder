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

ll modpow(ll a, ll b) {
  ll p = a, ret = 1;
  for (size_t i = 0; i < 31; i++) {
    if ((b & (1 << i)) != 0) {
      ret *= p;
      ret %= mod;
    }
    p *= p;
    p %= mod;
  }
  return ret;
}

ll moddiv(ll a, ll b) { return (a * modpow(b, mod - 2)) % mod; }

// 返り値をほかの値と演算するときはmodに注意
ll modfactorial(ll num) {
  ll res = 1;
  for (size_t i = 1; i <= num; i++) {
    res = res * i % mod;
  }
  return res;
}

// (x + y)/3 C (2y-x)/3
int main() {
  ll x, y;
  cin >> x >> y;

  if (2 * y - x < 0 || 2 * x - y < 0) {
    std::cout << "0" << std::endl;
    return 0;
  }
  if ((2 * y - x) % 3 != 0 || (2 * x - y) % 3 != 0) {
    std::cout << "0" << std::endl;
    return 0;
  }
  ll bunbo = 1, bunsi = 1;
  ll a = (2 * y - x) / 3, b = (2 * x - y) / 3;
  bunsi = modfactorial(a + b);
  bunbo = modfactorial(a);
  bunbo = bunbo * modfactorial(b) % mod;

  std::cout << moddiv(bunsi, bunbo) << std::endl;

  return 0;
}
