#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
  ll n;
  cin >> n;
  ll p[2010][2] = {0};
  for (ll i = 0; i < n; i++) {
    cin >> p[i][0] >> p[i][1];
  }
  ld ret = numeric_limits<ld>::max();
  for (ll i = 0; i < n; i++) {
    for (ll j = i + 1; j < n; j++) {
      ld e = sqrt(pow(p[i][0] - p[j][0], 2) + pow(p[i][1] - p[j][1], 2));
      if (e < ret) ret = e;
    }
  }
  std::cout << setprecision(12) << fixed << ret << std::endl;
  return 0;
}
