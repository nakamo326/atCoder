#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
  ll a, b, h, m;
  cin >> a >> b >> h >> m;
  ld hDegree = (30 * h + 0.5 * m) * M_PI / 180;
  ld mDegree = m * 6 * M_PI / 180;
  ld hx, hy, mx, my;
  hx = cos(hDegree) * a;
  hy = sin(hDegree) * a;
  mx = cos(mDegree) * b;
  my = sin(mDegree) * b;
  ld ret = hypot(hx - mx, hy - my);
  cout << fixed << setprecision(12) << ret << std::endl;
  return 0;
}
