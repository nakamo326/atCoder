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

struct matrix {
  ll p[2][2] = {{0, 0}, {0, 0}};
};

matrix multiplication(matrix a, matrix b) {
  matrix ans;
  for (size_t i = 0; i < 2; i++) {
    for (size_t k = 0; k < 2; k++) {
      for (size_t j = 0; j < 2; j++) {
        ans.p[i][j] += a.p[i][k] * b.p[k][j];
        ans.p[i][j] %= mod;
      }
    }
  }
  return ans;
}

matrix matrix_power(matrix a, ll n) {
  matrix p = a;
  matrix q;
  bool flag = false;
  for (size_t i = 0; i < 60; i++) {
    if ((n & (1LL << i)) != 0LL) {
      if (flag == false) {
        q = p;
        flag = true;
      } else {
        q = multiplication(q, p);
      }
    }
    p = multiplication(p, p);
  }
  return q;
}

int main() {
  ll n;
  cin >> n;
  matrix a;
  a.p[0][0] = 2;
  a.p[0][1] = 1;
  a.p[1][0] = 1;
  matrix b = matrix_power(a, n - 1);
  std::cout << (b.p[1][0] + b.p[1][1]) % mod << std::endl;
  return 0;
}
