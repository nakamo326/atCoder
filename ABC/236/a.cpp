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
  string s;
  cin >> s;
  ll a, b;
  cin >> a >> b;
  for (size_t i = 0; i < s.size(); i++) {
    if (i == a - 1) {
      cout << s[b - 1];
    } else if (i == b - 1) {
      cout << s[a - 1];
    } else {
      cout << s[i];
    }
  }
  cout << endl;
  return 0;
}
