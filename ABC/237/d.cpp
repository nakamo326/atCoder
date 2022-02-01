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

template <typename T>
void outputVector(vector<T> vec) {
  for (size_t i = 0; i < vec.size() - 1; i++) {
    std::cout << vec.at(i) << " ";
  }
  std::cout << vec.back() << std::endl;
}

int main() {
  ll n;
  string s;
  cin >> n;
  cin >> s;
  vll v;
  v.push_back(0);
  deque<ll> ret;
  // 逆から挿入する？
  ret.push_back(n);
  for (size_t i = n; i > 0; i--) {
    if (s[i - 1] == 'L') {  // miginitasu
      ret.push_back(i - 1);
    } else {  // hidarinitasu
      ret.push_front(i - 1);
    }
  }
  for (size_t i = 0; i <= n; i++) {
    std::cout << ret[i];
    if (i - 1 != n) std::cout << " ";
  }
  std::cout << std::endl;
  return 0;
}
