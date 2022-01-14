#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;

int main() {
  ld l = 1, r = 2;
  ld m;
  for (ll i = 0; i < 40; i++) {
    m = (l + r) / 2;
    if (m * m < 2)
      l = m;
    else
      r = m;
  }
  std::cout << "m: " << setprecision(40) << fixed << m << std::endl;

  return 0;
}
