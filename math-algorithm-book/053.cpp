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
  for (size_t i = 0; i < 60; i++) {
    if ((b & (1LL << i)) != 0) {
      ret *= p;
      ret %= mod;
    }
    p *= p;
    p %= mod;
  }
  return ret;
}

ll moddiv(ll a, ll b) { return (a * modpow(b, mod - 2)) % mod; }

// 返り値をほかの値と演算するときはmodに注意 ex) bunbo = bunbo * modfactorial(b)
// % mod;
ll modfactorial(ll num) {
  ll res = 1;
  for (size_t i = 1; i <= num; i++) {
    res = res * i % mod;
  }
  return res;
}

int main() {
  ll n;
  cin >> n;
  ll v = modpow(4, n + 1) - 1;
  ll ans = moddiv(v, 3);
  std::cout << ans << std::endl;
  return 0;
}
