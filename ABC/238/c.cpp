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

ll getdigit(ll n) {
  ll ret = 1;
  while (n > 9) {
    ret++;
    n = n / 10;
  }
  return ret;
}

int main() {
  unsigned long long m = 998244353;
  unsigned long long x = 10;
  unsigned long long n;
  cin >> n;
  unsigned long long digit = getdigit(n);
  unsigned long long ret = 0;
  for (unsigned long long i = 1; i < digit; i++) {
    unsigned long long t = pow(x, i) - 1;
    unsigned long long u = pow(x, i - 1) - 1;
    ret += (t - u) % m * (t - u + 1) / 2 % m;
    std::cout << ret << std::endl;
    ret %= m;
  }
  unsigned long long u = pow(x, digit - 1);
  u -= 1;
  ret += (n - u) % m * (n - u + 1) / 2 % m;
  ret %= m;
  std::cout << ret << std::endl;
  return 0;
}
