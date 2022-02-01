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
  ll n;
  cin >> n;
  if (n <= std::numeric_limits<int>::max() &&
      n >= std::numeric_limits<int>::min())
    std::cout << "Yes" << std::endl;
  else
    std::cout << "No" << std::endl;
  return 0;
}
