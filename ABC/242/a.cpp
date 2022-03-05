#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) std::begin(x), std::end(x)

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;

int main() {
  ll a, b, c, x;
  cin >> a >> b >> c >> x;
  if (x <= a) {
    std::cout << std::fixed << 1 << std::endl;
    return 0;
  } else if (x > b) {
    std::cout << 0 << std::endl;
    return 0;
  } else {
    std::cout << std::fixed << (double)c / (b - a) << std::endl;
    return 0;
  }
  return 0;
}
