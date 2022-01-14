#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;

int main() {
  ll n;
  vll t1(100010), t2(100010);
  cin >> n;
  for (ll i = 1; i <= n; i++) {
    ll c, p;
    cin >> c >> p;
    if (c == 1) {
      t1[i] = t1[i - 1] + p;
      t2[i] = t2[i - 1];
    } else {
      t2[i] = t2[i - 1] + p;
      t1[i] = t1[i - 1];
    }
  }
  ll q;
  cin >> q;
  for (ll i = 0; i < q; i++) {
    ll l, r;
    cin >> l >> r;
    cout << t1[r] - t1[l - 1] << " " << t2[r] - t2[l - 1] << std::endl;
  }
  return 0;
}
