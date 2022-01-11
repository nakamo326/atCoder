#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll a[2], b[2], c[2];
  cin >> a[0] >> a[1];
  cin >> b[0] >> b[1];
  cin >> c[0] >> c[1];

  ll ba[2] = {a[0] - b[0], a[1] - b[1]};
  ll bc[2] = {c[0] - b[0], c[1] - b[1]};
  ll ca[2] = {a[0] - c[0], a[1] - c[1]};
  ll cb[2] = {b[0] - c[0], b[1] - c[1]};

  double ret;
  if (ba[0] * bc[0] + ba[1] * bc[1] < 0) {
    ret = sqrt(ba[0] * ba[0] + ba[1] * ba[1]);
  } else if (ca[0] * cb[0] + ca[1] * cb[1] < 0) {
    ret = sqrt(ca[0] * ca[0] + ca[1] * ca[1]);
  } else {
    ll cp = abs(ba[0] * bc[1] - ba[1] * bc[0]);
    double e = sqrt(bc[0] * bc[0] + bc[1] * bc[1]);
    ret = cp / e;
  }
  std::cout << fixed << ret << std::endl;
  return 0;
}
