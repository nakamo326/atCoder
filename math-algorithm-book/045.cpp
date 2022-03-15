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
  ll n, m;
  cin >> n >> m;
  std::vector<vll> e(n + 1);
  for (size_t i = 0; i < m; i++) {
    ll a, b;
    cin >> a >> b;
    e[a].push_back(b);
    e[b].push_back(a);
  }
  ll ret = 0;
  for (size_t i = 1; i <= n; i++) {
    ll count = 0;
    for (size_t j = 0; j < e[i].size(); j++) {
      if (e[i][j] < i) count++;
    }
    if (count == 1) ret++;
  }

  std::cout << ret << std::endl;
  return 0;
}
