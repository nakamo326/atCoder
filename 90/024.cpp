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
  ll n, k;
  cin >> n >> k;
  vll a, b;
  REP(i, n) {
    ll tmp;
    cin >> tmp;
    a.push_back(tmp);
  }
  REP(i, n) {
    ll tmp;
    cin >> tmp;
    b.push_back(tmp);
  }
  ll nk = 0;
  for (size_t i = 0; i < n; i++) {
    while (a[i] != b[i]) {
      if (a[i] < b[i]) {
        a[i]++;
      } else {
        a[i]--;
      }
      nk++;
    }
  }
  if (nk == k || (nk < k && (k - nk) % 2 == 0))
    std::cout << "Yes" << std::endl;
  else
    std::cout << "No" << std::endl;
  return 0;
}
