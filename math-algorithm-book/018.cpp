#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll num[4] = {0, 0, 0, 0};
  for (ll i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    switch (tmp) {
      case 100: num[0]++; break;
      case 200: num[1]++; break;
      case 300: num[2]++; break;
      case 400: num[3]++; break;
      default: break;
    }
  }
  ll ret = num[0] * num[3] + num[1] * num[2];
  std::cout << ret << std::endl;
  return 0;
}
