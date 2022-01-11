#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
  ll x1, y1, r1;
  ll x2, y2, r2;
  cin >> x1 >> y1 >> r1;
  cin >> x2 >> y2 >> r2;

  ld d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  if (d < abs(r1 - r2)) {
    std::cout << "1" << std::endl;
  } else if (d == abs(r1 - r2)) {
    std::cout << "2" << std::endl;
  } else if (abs(r1 - r2) < d && d < abs(r1 + r2)) {
    std::cout << "3" << std::endl;
  } else if (d == abs(r1 + r2)) {
    std::cout << "4" << std::endl;
  } else {
    std::cout << "5" << std::endl;
  }
  return 0;
}
