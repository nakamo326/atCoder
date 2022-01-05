#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll a = 0, b = 0;
  for (ll i = 0; i < n; i++) {
    ll t;
    cin >> t;
    a += t;
  }
  for (ll i = 0; i < n; i++) {
    ll t;
    cin >> t;
    b += t;
  }
  double ret = (double)a / 3 + (double)b / 3 * 2;
  std::cout << fixed << ret << std::endl;
  return 0;
}
