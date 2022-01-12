#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;

int main() {
  ll n, q;
  vl l(100010), r(100010), x(100010), t(100010);
  cin >> n >> q;
  for (ll i = 1; i <= q; i++) {
    cin >> l[i] >> r[i] >> x[i];
    t[l[i]] += x[i];
    t[r[i] + 1] -= x[i];
  }
  for (ll i = 2; i <= n; i++) {
    if (t[i] < 0) {
      std::cout << ">";
    } else if (t[i] > 0) {
      std::cout << "<";
    } else if (t[i] == 0) {
      std::cout << "=";
    }
  }
  std::cout << std::endl;
  return 0;
}
