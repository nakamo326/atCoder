#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll func(ll t) {
  ll ret = t * t + 2 * t + 3;
  return ret;
}

int main() {
  ll t;
  cin >> t;
  ll ret = func(func(func(t) + t) + func(func(t)));
  std::cout << ret << std::endl;
  return 0;
}
