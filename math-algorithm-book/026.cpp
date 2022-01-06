#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  double ret = 0;
  for (ll i = 0; i < n; i++) {
    ret += (double)n / (n - i);
  }
  std::cout << fixed << ret << std::endl;
  return 0;
}
