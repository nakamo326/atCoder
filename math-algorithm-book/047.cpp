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

void solve(std::vector<vll>& e, vll& res, ll index) {
  // std::cout << "come in " << index << std::endl;
  for (auto it = e[index].begin(); it != e[index].end(); it++) {
    if (res[*it] == -1) {
      // std::cout << "need to color " << *it << std::endl;
      res[*it] = !res[index];
      solve(e, res, *it);
    }
  }
}

bool check(std::vector<vll> e, vll res, ll n) {
  for (ll i = 1; i <= n; i++) {
    vll edges = e[i];
    for (auto it = edges.begin(); it != edges.end(); it++) {
      if (res[*it] == res[i]) return false;
    }
  }
  return true;
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
  vll res(n + 1, -1);

  res[1] = 1;
  for (ll i = 1; i <= n; i++) {
    solve(e, res, i);
  }

  if (check(e, res, n))
    std::cout << "Yes" << std::endl;
  else
    std::cout << "No" << std::endl;
  return 0;
}
