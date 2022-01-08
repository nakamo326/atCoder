#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;
  ll p[500000];
  for (ll i = 0; i < n; i++) {
    cin >> p[i];
  }
  // i = k;
  vector<ll> tmp;
  for (ll i = 0; i < k; i++) {
    tmp.push_back(p[i]);
  }
  sort(tmp.begin(), tmp.end(), std::greater<int>());
  ll ret = tmp.at(k - 1);
  std::cout << ret << std::endl;

  // k + 1 to n
  for (ll i = k; i < n; i++) {
    if (ret > p[i]) {
      std::cout << ret << std::endl;
      tmp.push_back(p[i]);
    } else {
      tmp.push_back(p[i]);
      sort(tmp.begin(), tmp.end(), std::greater<int>());
      ret = tmp.at(k - 1);
      std::cout << ret << std::endl;
    }
  }

  return 0;
}
