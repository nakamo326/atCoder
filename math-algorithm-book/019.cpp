#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

long long getFractorial(long long n) {
  long long ret = 1;
  while (n > 1) ret *= n--;
  return ret;
}

long long combinate(long long num, long long choose) {
  return num * (num - 1) / getFractorial(choose);
}

int main() {
  ll n;
  cin >> n;
  ll num[4] = {0, 0, 0};
  for (ll i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    switch (tmp) {
      case 1: num[0]++; break;
      case 2: num[1]++; break;
      case 3: num[2]++; break;
      default: break;
    }
  }
  ll ret = combinate(num[0], 2) + combinate(num[1], 2) + combinate(num[2], 2);
  std::cout << ret << std::endl;
  return 0;
}
