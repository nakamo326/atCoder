#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;

int main() {
  ll t, n, ret = 0;
  cin >> t >> n;
  vll ad(500010);
  for (ll i = 1; i <= n; i++) {
    ll l, r;
    cin >> l >> r;
    ad[l] += 1;
    ad[r] -= 1;
  }
  for (ll i = 0; i < t; i++) {
    ret += ad[i];
    std::cout << ret << std::endl;
  }
  return 0;
}
