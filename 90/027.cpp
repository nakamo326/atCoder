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
  set<string> u;
  REP(i, n) {
    string t;
    cin >> t;
    // if (u.find(t) == u.end()) {
    //   std::cout << i + 1 << std::endl;
    //   u.insert(t);
    // }
    if (u.insert(t).second) {  // insert().secondに値が追加されたかが返る
      std::cout << i + 1 << std::endl;
    }
  }
  return 0;
}
