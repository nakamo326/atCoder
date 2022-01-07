#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll x, y;
  cin >> x >> y;
  ll rest = y - x;
  if (rest <= 0) {
    std::cout << 0 << std::endl;
  } else if (rest % 10 == 0) {
    std::cout << rest / 10 << std::endl;
  } else {
    std::cout << rest / 10 + 1 << std::endl;
  }
  return 0;
}
