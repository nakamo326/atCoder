#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
  ll n, q;
  cin >> n >> q;
  vector<ll> a(100010), l(100010), r(100010), t(100010);
  for (ll i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (ll i = 1; i <= q; i++) {
    cin >> l[i] >> r[i];
  }
  r[0] = 0;
  for (ll i = 1; i <= n; i++) {
    t[i] = a[i] + t[i - 1];
  }
  for (ll i = 1; i <= q; i++) {
    std::cout << t[r[i]] - t[l[i] - 1] << std::endl;
  }

  return 0;
}
