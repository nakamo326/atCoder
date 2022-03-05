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

ll ret = 0;

void solve(vll v, ll n, ll index) {
  if (index == n) {
    ret++;
    ret %= 998244353;
    return;
  }
  for (ll i = 1; i <= 9; i++) {
    if (index == 0 || std::abs(v[index - 1] - i) <= 1) {
      v[index] = i;
      solve(v, n, index + 1);
    }
  }
}

int main() {
  ll n;
  cin >> n;
  vll v(n);
  solve(v, n, 0);
  std::cout << ret << std::endl;
  return 0;
}
