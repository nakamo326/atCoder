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
  ll n, m;
  cin >> n >> m;
  vector<string> s(n);
  for (size_t i = 0; i < n; i++) {
    string t;
    cin >> t;
    s[i] = t;
  }
  vector<string> t(m);
  for (size_t i = 0; i < m; i++) {
    string tmp;
    cin >> tmp;
    t[i] = tmp;
  }
  std::cout << "Yes" << std::endl;
  ll j = 1;
  for (size_t i = 1; i < m; i++) {
    while (t[i] != s[j]) {
      // std::cout << "cmp :" << t[i] << " and " << s[j] << std::endl;
      std::cout << "No" << std::endl;
      j++;
      if (j == n) {
        break;
      }
    }
    std::cout << "Yes" << std::endl;
    j++;
  }

  return 0;
}
