#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll xy[110][2];
  for (ll i = 0; i < n; i++) {
    cin >> xy[i][0] >> xy[i][1];
  }
  double ret = -1;
  for (ll i = 0; i < n; i++) {
    for (ll j = i + 1; j < n; j++) {
      double tmp =
          sqrt(pow(xy[i][0] - xy[j][0], 2) + pow(xy[i][1] - xy[j][1], 2));
      if (tmp > ret) ret = tmp;
    }
  }
  std::cout << fixed << ret << std::endl;
  return 0;
}
