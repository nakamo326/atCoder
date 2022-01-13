#include <bits/stdc++.h>

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
  cin >> n;
  vll a(200010), t(200010), b(200010);
  for (ll i = 1; i < n; i++) {
    cin >> a[i];
    t[i + 1] = t[i] + a[i];
  }
  ll m;
  cin >> m;
  for (ll i = 0; i < m; i++) {
    cin >> b[i];
  }

  ll ret = 0;
  for (ll i = 1; i < m; i++) {
    if (b[i] > b[i - 1]) {
      ret += t[b[i]] - t[b[i - 1]];
    } else {
      ret += t[b[i - 1]] - t[b[i]];
    }
  }
  std::cout << ret << std::endl;
  return 0;
}
