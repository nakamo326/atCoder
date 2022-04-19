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
  std::deque<ll> deq;
  ll q;
  cin >> q;
  for (size_t i = 0; i < q; i++) {
    ll t, x;
    cin >> t >> x;
    if (t == 1) {
      deq.push_front(x);
    } else if (t == 2) {
      deq.push_back(x);
    } else {
      std::cout << deq.at(x - 1) << std::endl;
    }
  }

  return 0;
}
