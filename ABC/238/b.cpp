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
  ll n;
  cin >> n;
  vll pizza(360);
  pizza[0] = 1;
  ll t = 0;
  for (size_t i = 0; i < n; i++) {
    ll a;
    cin >> a;
    t += a;
    t %= 360;
    pizza[t] = 1;
  }
  ll ans = 0;
  t = 0;
  for (size_t i = 0; i <= 360; i++) {
    if (pizza[i % 360] == 1) {
      if (t > ans) ans = t;
      t = 0;
    }
    t++;
  }
  std::cout << ans << std::endl;
  return 0;
}
