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
  ll i = 0;
  while (s.back() == 'a') {
    s.pop_back();
    if (s[i] == 'a') i++;
  }
  s = s.substr(std::min<size_t>(i, s.size()));
  // std::cout << s << std::endl;
  i = 0;
  while (s.size() != 0 && i != s.size() - i - 1) {
    // std::cout << "comp: " << s[i] << " " << s[s.size() - i - 1] << std::endl;
    if (s[i] != s[s.size() - i - 1]) {
      std::cout << "No" << std::endl;
      return 0;
    }
    if (i + 1 == s.size() - i - 1) {
      break;
    }
    i++;
  }
  std::cout << "Yes" << std::endl;
  return 0;
}

// apsspaaa