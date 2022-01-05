#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll p[100], q[100];
  for (ll i = 0; i < n; i++) cin >> p[i] >> q[i];
  double ret = 0;
  for (ll i = 0; i < n; i++) ret += (double)q[i] / p[i];
  std::cout << fixed << ret << std::endl;
  return 0;
}
