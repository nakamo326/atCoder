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
  vll a(n + 1);
  for (size_t i = 0; i < 4 * n - 1; i++) {
    ll x;
    cin >> x;
    a[x]++;
  }
  for (size_t i = 1; i <= n; i++) {
    if (a[i] != 4) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}
