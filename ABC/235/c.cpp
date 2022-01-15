#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;

int main() {
  ll n, q;
  cin >> n >> q;
  map<ll, vector<ll>> sum;
  for (ll i = 1; i <= n; i++) {
    ll t;
    cin >> t;
    sum[t].push_back(i);
  }
  for (ll i = 0; i < q; i++) {
    ll tx, tk;
    cin >> tx >> tk;
    if (sum[tx].size() < tk) {
      std::cout << "-1" << std::endl;
    } else {
      std::cout << sum[tx][tk - 1] << std::endl;
    }
  }

  return 0;
}
