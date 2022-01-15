#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;

int main() {
  ll n;
  cin >> n;
  vll h;
  for (ll i = 0; i < n; i++) {
    ll t;
    cin >> t;
    h.push_back(t);
  }
  ll c = h[0];
  for (ll i = 1; i < n; i++) {
    if (h[i] > c) {
      c = h[i];
    } else {
      break;
    }
  }
  std::cout << c << std::endl;
  return 0;
}
